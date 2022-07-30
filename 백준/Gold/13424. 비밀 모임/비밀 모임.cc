#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        vector<vector<int>> dis(N+1, vector<int>(N+1, INT_MAX));

        for(int i=1; i<=N; i++) dis[i][i] = 0;

        while(M--) {
            int a, b, c; cin >> a >> b >> c;

            dis[a][b] = dis[b][a] = c;
        }

        for(int k=1; k<=N; k++)
            for(int i=1; i<=N; i++)
                for(int j=1; j<=N; j++)
                    if(dis[i][k] != INT_MAX && dis[k][j] != INT_MAX)
                        dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);

        int K; cin >> K;

        vector<int> v(K);
        for(int i=0; i<K; i++) cin >> v[i];

        int ans, Min = INT_MAX;

        for(int i=1; i<=N; i++) {
            int sum = 0;

            for(int j=0; j<K; j++) sum += dis[v[j]][i];

            if(sum < Min) {
                Min = sum;
                ans = i;
            }
        }

        cout << ans << "\n";
    }
}
