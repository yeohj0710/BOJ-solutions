#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        vector<vector<int>> dis(N, vector<int>(N, INT_MAX));

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) {
                int x; cin >> x;

                if(x != -1) dis[i][j] = x;
            }

        for(int k=0; k<N; k++)
            for(int i=0; i<N; i++)
                for(int j=0; j<N; j++)
                    if(dis[i][k] != INT_MAX && dis[k][j] != INT_MAX)
                        dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);

        bool check = true;
        int ans = 0;

        for(int i=1; i<=N; i++) {
            if(dis[v[i-1]][v[i%N]] == INT_MAX) {
                check = false;
                break;
            }

            ans += dis[v[i-1]][v[i%N]];
        }

        if(check) cout << ans << "\n";
        else cout << "impossible\n";
    }
}
