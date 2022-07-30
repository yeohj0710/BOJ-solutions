#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K, Q; cin >> N >> M >> K >> Q;

    vector<vector<int>> dis(N+1, vector<int>(N+1, INT_MAX));

    for(int i=1; i<=N; i++) dis[i][i] = 0;

    while(M--) {
        int a, b, c; cin >> a >> b >> c;

        dis[a][b] = c;
    }

    for(int k=1; k<=N; k++)
        for(int i=1; i<=N; i++)
            for(int j=1; j<=N; j++)
                if(dis[i][k] != INT_MAX && dis[k][j] != INT_MAX)
                    dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);

    int cnt = 0, sum = 0;

    while(Q--) {
        int a, b; cin >> a >> b;

        bool check = false;
        int Min = INT_MAX;

        for(int i=1; i<=K; i++) {
            if(dis[a][i] != INT_MAX && dis[i][b] != INT_MAX) {
                check = true;
                Min = min(Min, dis[a][i] + dis[i][b]);
            }
        }

        if(check) {
            cnt++;
            sum += Min;
        }
    }

    cout << cnt << "\n" << sum << "\n";
}
