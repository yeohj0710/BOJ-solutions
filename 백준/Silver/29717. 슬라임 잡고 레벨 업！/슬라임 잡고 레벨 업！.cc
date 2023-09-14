#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        int x = N * (N + 1) / 2;

        int l = 0, r = INT_MAX, ans = 0;

        while(l <= r) {
            int m = (l + r) / 2, sum = m * (m + 1);

            if(sum <= x) {
                ans = m;
                l = m + 1;
            }
            else r = m - 1;
        }

        ans++;

        cout << ans << "\n";
    }
}
