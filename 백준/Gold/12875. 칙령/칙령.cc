#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> dis(N, vector<int>(N, INT_MAX));

    for(int i=0; i<N; i++) dis[i][i] = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            char c; cin >> c;

            if(c == 'Y') dis[i][j] = 1;
        }

    for(int k=0; k<N; k++)
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                if(dis[i][k] != INT_MAX && dis[k][j] != INT_MAX)
                    dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);

    int Max = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            if(dis[i][j] == INT_MAX) {
                cout << -1 << "\n";
                return 0;
            }

            Max = max(Max, dis[i][j]);
        }

    int ans = Max * M;

    cout << ans << "\n";
}
