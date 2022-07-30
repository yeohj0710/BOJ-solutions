#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int s, x, y; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> dis(N+1, vector<int>(N+1, INT_MAX));

    for(int i=1; i<=N; i++) dis[i][i] = 0;

    vector<s> v(N+1);
    for(int i=1; i<=N; i++)
        cin >> v[i].s >> v[i].x >> v[i].y;

    for(int i=1; i<=N; i++)
        for(int j=i+1; j<=N; j++) {
            dis[i][j] = dis[j][i] = abs(v[i].x - v[j].x) + abs(v[i].y - v[j].y);

            if(v[i].s == 1 && v[j].s == 1) dis[i][j] = dis[j][i] = min(dis[i][j], M);
        }

    for(int k=1; k<=N; k++)
        for(int i=1; i<=N; i++)
            for(int j=1; j<=N; j++)
                if(dis[i][k] != INT_MAX && dis[k][j] != INT_MAX)
                    dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);

    int K; cin >> K;

    while(K--) {
        int a, b; cin >> a >> b;

        cout << dis[a][b] << "\n";
    }
}
