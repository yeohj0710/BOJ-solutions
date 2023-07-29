#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    double N, L, W, H; cin >> N >> L >> W >> H;

    double l = 0, r = INT_MAX, ans = 0, times = 1e2;

    while(times--) {
        double m = (l + r) / 2;

        int cnt = (int)(L / m) * (int)(W / m) * (int)(H / m);

        if(cnt >= N) {
            ans = max(ans, m);
            l = m;
        }
        else r = m;
    }

    cout << fixed << setprecision(9);

    cout << ans << "\n";
}
