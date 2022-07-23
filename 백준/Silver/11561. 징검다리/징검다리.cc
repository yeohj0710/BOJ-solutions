#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        int l = 1, r = INT_MAX, ans = 0;

        while(l <= r) {
            int m = (l + r)/2;

            int sum = m * (m + 1) / 2;

            if(sum <= N) {
                ans = max(ans, m);
                l = m + 1;
            }
            else r = m - 1;
        }

        cout << ans << "\n";
    }
}
