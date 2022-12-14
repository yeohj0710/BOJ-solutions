#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    cout << fixed << setprecision(6);

    double W, H, N; cin >> W >> H >> N;

    double ans = 0;

    for(int i=1; i<=N-1; i++) {
        double x = (double)W * i / N;

        ans += abs((-(H/W)*x + H) - (H/W)*x);
    }

    cout << ans << "\n";
}
