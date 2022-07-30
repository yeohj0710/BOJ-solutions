#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<vector<char>> v(N, vector<char>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> v[i][j];

    vector<vector<int>> dis(N*N, vector<int>(N*N, INT_MAX));

    for(int i=0; i<N*N; i++) dis[i][i] = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<N-1; j++) {
            if(v[i][j] == v[i][j+1]) dis[i*N+j][i*N+j+1] = dis[i*N+j+1][i*N+j] = M;
            else dis[i*N+j][i*N+j+1] = dis[i*N+j+1][i*N+j] = K;
        }

    for(int i=0; i<N-1; i++)
        for(int j=0; j<N; j++) {
            if(v[i][j] == v[i+1][j]) dis[i*N+j][(i+1)*N+j] = dis[(i+1)*N+j][i*N+j] = M;
            else dis[i*N+j][(i+1)*N+j] = dis[(i+1)*N+j][i*N+j] = K;
        }

    for(int k=0; k<N*N; k++)
        for(int i=0; i<N*N; i++)
            for(int j=0; j<N*N; j++)
                if(dis[i][k] != INT_MAX && dis[k][j] != INT_MAX)
                        dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);

    int ans = 0;

    for(int i=0; i<N*N; i++)
        for(int j=i+1; j<N*N; j++)
            if(dis[i][j] != INT_MAX) ans = max(ans, dis[i][j]);

    cout << ans << "\n";
}
