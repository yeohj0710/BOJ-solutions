#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        vector<bool> v(101);

        while(N--) {
            int x; cin >> x;

            v[x] = true;
        }

        int ans = 0;

        while(M--) {
            int x; cin >> x;

            if(v[x]) ans++;
        }

        cout << ans << "\n";
    }
}
