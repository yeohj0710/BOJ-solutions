#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        vector<int> u(N), v(M);
        int x = 0, y = 0;

        for(int i=0; i<N; i++) {
            cin >> u[i];
            x += u[i];
        }

        for(int i=0; i<M; i++) {
            cin >> v[i];
            y += v[i];
        }

        vector<pair<int, pair<int, int>>> ans;
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                if((u[i] - v[j]) * 2 == x - y) ans.push_back({u[i] + v[j], {u[i], v[j]}});

        sort(ans.begin(), ans.end());

        if(ans.size() != 0) cout << ans[0].second.first << " " << ans[0].second.second << "\n";
        else cout << -1 << "\n";
    }
}
