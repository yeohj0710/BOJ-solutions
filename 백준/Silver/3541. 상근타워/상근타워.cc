#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> M >> N;

    int ans = INT_MAX;

    while(N--) {
        int a, b; cin >> a >> b;

        int l = 1, r = M;

        while(l <= r) {
            int m = (l + r) / 2;

            int x = a * m - b * (M - m);

            if(x > 0) {
                ans = min(ans, x);
                r = m - 1;
            }
            else l = m + 1;
        }
    }

    cout << ans << "\n";
}
