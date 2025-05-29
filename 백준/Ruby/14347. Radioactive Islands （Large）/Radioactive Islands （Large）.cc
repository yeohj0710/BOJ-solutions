#include <bits/stdc++.h>
#define int long long
using namespace std;

double a, b, h = 0.01;
vector<double> v;

double g(double x, double y, double yp) {
    double M = 1, Mx = 0, My = 0;

    for(int i=0; i<v.size(); i++) {
        double d = pow(x, 2) + pow(y - v[i], 2);

        M += 1 / d;
        Mx += (-2) * x / pow(d, 2);
        My += (-2) * (y - v[i]) / pow(d, 2);
    }

    return ((1 + pow(yp, 2)) / M) * (My - Mx * yp);
}

tuple<vector<double>, vector<double>, vector<double>> rk4(double yp0) {
    int s = 20 / h;

    vector<double> xs(s+1), ys(s+1), yps(s+1);

    xs[0] = -10;
    ys[0] = a;
    yps[0] = yp0;

    for(int i=0; i<s; i++) {
        double xi = xs[i], y1i = ys[i], y2i = yps[i];

        double k1, k2, k3, k4, l1, l2, l3, l4;

        k1 = h * y2i;
        l1 = h * g(xi, y1i, y2i);

        k2 = h * (y2i + l1 / 2);
        l2 = h * g(xi + h / 2, y1i + k1 / 2, y2i + l1 / 2);

        k3 = h * (y2i + l2 / 2);
        l3 = h * g(xi + h / 2, y1i + k2 / 2, y2i + l2 / 2);

        k4 = h * (y2i + l3);
        l4 = h * g(xi + h, y1i + k3, y2i + l3);

        xs[i + 1] = xi + h;
        ys[i + 1] = y1i + (1.0 / 6.0) * (k1 + 2 * k2 + 2 * k3 + k4);
        yps[i + 1] = y2i + (1.0 / 6.0) * (l1 + 2 * l2 + 2 * l3 + l4);
    }

    return {xs, ys, yps};
}

double s(vector<double>& x, vector<double>& y, vector<double>& yp) {
    int n = x.size();
    double tot = 0;

    auto ff = [&](int i) {
        double xi = x[i], yi = y[i], ypi = yp[i];
        double tmp = 1.0;

        for(int j=0; j<v.size(); j++)
            tmp += 1 / (pow(xi, 2) + pow(yi - v[j], 2));

        return tmp * sqrt(1 + ypi*ypi);
    };

    for(int i=0; i<n-2; i+=2)
        tot += ff(i) + 4 * ff(i + 1) + ff(i + 2);

    return tot * (h / 3.0);
}

double f(double l, double r) {
    int tr = 50;
    vector<double> xs, ys, yps;

    while(tr--) {
        double md = (l + r) / 2;

        tie(xs, ys, yps) = rk4(md);

        if(ys.back() < b) l = md;
        else r = md;
    }

    return s(xs, ys, yps);
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    cout << fixed << setprecision(3);

    for(int t=1; t<=T; t++) {
        int n; cin >> n >> a >> b;

        double ans = 0;

        v.resize(n);
        for(int i=0; i<n; i++) cin >> v[i];

        sort(v.begin(), v.end());

        if(n == 1) {
            double k = (v[0] - a) / 10;

            ans = min(f(k - 5, k), f(k, k + 5));
        }
        else if(n == 2) {
            double k1 = (v[0] - a) / 10;
            double k2 = (v[1] - a) / 10;

            ans = min({f(k1 - 10, k1), f(k1, k2), f(k2, k2 + 10)});
        }

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
