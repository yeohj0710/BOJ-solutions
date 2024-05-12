#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        int ans = 1;

        while(true) {
            if(N <= M) break;

            N /= (M + 1);

            ans++;
        }

        cout << ans << "\n";
    }
}
