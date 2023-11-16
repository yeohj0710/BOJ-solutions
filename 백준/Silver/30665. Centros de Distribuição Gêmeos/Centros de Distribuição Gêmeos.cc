#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int N, M; cin >> N >> M;

        if(N == 0 && M == 0) break;

        vector<vector<int>> v(N+1);
        for(int i=1; i<=N; i++) v[i].push_back(i);

        while(M--) {
            int a, b; cin >> a >> b;

            v[a].push_back(b);
            v[b].push_back(a);
        }

        for(int i=1; i<=N; i++)
            sort(v[i].begin(), v[i].end());

        int ans = 0;

        for(int i=1; i<=N; i++)
            for(int j=i+1; j<=N; j++)
                if(v[i] == v[j]) ans++;

        cout << ans << "\n";
    }
}
