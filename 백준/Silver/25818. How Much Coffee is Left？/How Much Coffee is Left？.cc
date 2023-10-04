#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    double r, s, h, m, d; cin >> r >> s >> h >> m >> d;

    double k = (d * s + (h - d) * r) / h;

    double H = r * h / (s - r);

    double ans = (m * ((d + H) * k * k - H * r * r)) / ((h + H) * s * s - (d + H) * k * k);

    cout << fixed << setprecision(6);
    cout << ans << "\n";
}
