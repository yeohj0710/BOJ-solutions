#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int N, M; cin >> N >> M;

        if(N == 0 && M == 0) break;

        vector<int> v(N);

        for(int i=0; i<N; i++) cin >> v[i];

        int ans = 0;

        while(M--) {
            bool chk = true;

            for(int i=0; i<N; i++) {
                int x; cin >> x;

                if(x > v[i]) chk = false;
            }

            if(chk) ans++;
        }

        cout << ans << "\n";
    }
}
