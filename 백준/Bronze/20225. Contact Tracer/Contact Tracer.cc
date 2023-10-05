#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int N, M, K; cin >> N >> M >> K;

        if(N == 0 && M == 0 && K == 0) break;

        vector<bool> v(N+1);
        v[K] = true;

        while(M--) {
            int a, b; cin >> a >> b;

            if(v[a] || v[b]) v[a] = v[b] = true;
        }

        int ans = 0;

        for(int i=1; i<=N; i++)
            if(v[i]) ans++;

        cout << ans << "\n";
    }
}
