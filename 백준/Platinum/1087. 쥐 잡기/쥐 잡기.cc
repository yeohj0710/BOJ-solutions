#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { double x, y, vx, vy; };
vector<s> v;

double f(double m) {
    double xmin = INT_MAX, ymin = INT_MAX, xmax = INT_MIN, ymax = INT_MIN;

    for(int i=0; i<v.size(); i++) {
        xmin = min(xmin, v[i].x + v[i].vx * m);
        ymin = min(ymin, v[i].y + v[i].vy * m);
        xmax = max(xmax, v[i].x + v[i].vx * m);
        ymax = max(ymax, v[i].y + v[i].vy * m);
    }

    return max(xmax - xmin, ymax - ymin);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(9);

    int N; cin >> N;

    v.resize(N);
    for(int i=0; i<N; i++)
        cin >> v[i].x >> v[i].y >> v[i].vx >> v[i].vy;

    double l = 0, r = 2e3, tr = 1e2;

    while(tr--) {
        double m1 = (l*2 + r) / 3;
        double m2 = (l + r*2) / 3;

        if(f(m1) > f(m2)) l = m1;
        else r = m2;
    }

    double m = (l + r) / 2;

    cout << f(m) << "\n";
}
