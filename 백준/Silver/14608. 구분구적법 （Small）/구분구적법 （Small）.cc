#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<double> v(n+1);
    for(int i=n; i>=0; i--) cin >> v[i];

    double a, b, m; cin >> a >> b >> m;

    double sum = 0;

    for(int i=0; i<=n; i++) sum += v[i] * (pow(b, i+1) - pow(a, i+1)) / (i + 1);

    double l = 0, r = (b - a) / m, trl = 1e3;

    while(trl--) {
        double md = (l + r) / 2;

        double apx = 0;

        for(int i=0; i<m; i++) {
            double x = a + i * (b - a) / m + md;

            for(int j=0; j<=n; j++) apx += v[j] * pow(x, j) * (b - a) / m;
        }

        if(sum - apx < 0) r = md;
        else l = md;
    }

    cout << fixed << setprecision(6);
    cout << l << "\n";
}
