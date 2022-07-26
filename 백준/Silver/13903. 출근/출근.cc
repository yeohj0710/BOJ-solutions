#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N, vector<int>(M));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    int K; cin >> K;

    vector<int> dx(K), dy(K);
    for(int i=0; i<K; i++) cin >> dx[i] >> dy[i];

    vector<vector<int>> dis(N, vector<int>(M, -1));
    for(int i=0; i<M; i++)
        if(v[0][i] == 1) dis[0][i] = 0;

    queue<pair<int, int>> q;
    for(int i=0; i<M; i++)
        if(v[0][i] == 1) q.push({0, i});

    int ans = INT_MAX;

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if(x == N-1) {
            ans = min(ans, dis[x][y]);
            continue;
        }

        for(int i=0; i<K; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if(v[nx][ny] != 1 || dis[nx][ny] != -1) continue;

            dis[nx][ny] = dis[x][y] + 1;
            q.push({nx, ny});
        }
    }

    if(ans != INT_MAX) cout << ans << "\n";
    else cout << -1 << "\n";
}
