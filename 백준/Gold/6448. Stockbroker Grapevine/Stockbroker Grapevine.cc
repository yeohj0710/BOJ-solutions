#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<vector<int>> dis(N+1, vector<int>(N+1, INT_MAX));

        for(int i=1; i<=N; i++) dis[i][i] = 0;

        for(int i=1; i<=N; i++) {
            int M; cin >> M;

            while(M--) {
                int a, b; cin >> a >> b;

                dis[i][a] = b;
            }
        }

        for(int k=1; k<=N; k++)
            for(int i=1; i<=N; i++)
                for(int j=1; j<=N; j++)
                    if(dis[i][k] != INT_MAX && dis[k][j] != INT_MAX)
                        dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);

        int ans, Min = INT_MAX;

        for(int i=1; i<=N; i++) {
            int Max = 0;
            bool check = true;

            for(int j=1; j<=N; j++) {
                if(dis[i][j] == INT_MAX) check = false;
                else Max = max(Max, dis[i][j]);
            }

            if(check && Max < Min) {
                Min = Max;
                ans = i;
            }
        }

        cout << ans << " " << Min << "\n";
    }
}
