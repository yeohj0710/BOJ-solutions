#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        int ans = 0;

        for(int i=0; i<N; i++) {
            int x; cin >> x;

            ans = max(ans, x);
        }

        ans = (ans * M - 1) / 1000 + 1;

        cout << ans << "\n";
    }
}
