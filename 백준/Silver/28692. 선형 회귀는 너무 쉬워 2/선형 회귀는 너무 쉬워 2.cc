#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    struct s { int x, y; };
    vector<s> v(n);

    int sx = 0, sy = 0, sxx = 0, sxy = 0;

    for(int i=0; i<n; i++) {
        cin >> v[i].x >> v[i].y;

        sx += v[i].x;
        sy += v[i].y;
        sxx += v[i].x * v[i].x;
        sxy += v[i].x * v[i].y;
    }

    if(n * sxx - sx * sx == 0) {
        cout << "EZPZ" << "\n";
        return 0;
    }

    double a = (double)(n * sxy - sx * sy) / (n * sxx - sx * sx);
    double b = (double)(sy - a * sx) / n;

    cout << fixed << setprecision(6);
    cout << a << " " << b << "\n";
}
