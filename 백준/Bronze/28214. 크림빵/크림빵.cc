#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    int ans = 0;

    for(int i=0; i<N; i++) {
        int cnt = 0;

        for(int j=0; j<M; j++) {
            int x; cin >> x;

            if(x == 0) cnt++;
        }

        if(cnt < K) ans++;
    }

    cout << ans << "\n";
}
