#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int x, y, z; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<vector<vector<int>>> dis(N, vector<vector<int>>(M, vector<int>(K, -1)));
    queue<s> q;

    vector<vector<vector<char>>> v(N, vector<vector<char>>(M, vector<char>(K)));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            for(int k=0; k<K; k++) {
                cin >> v[i][j][k];

                if(v[i][j][k] == '1') {
                    dis[i][j][k] = 0;
                    q.push({i, j, k});
                }
            }

    while(!q.empty()) {
        int x = q.front().x;
        int y = q.front().y;
        int z = q.front().z;
        q.pop();

        if(v[x][y][z] == '2') {
            cout << dis[x][y][z] * 5 << "\n";
            break;
        }

        int dx[5] = {1, 0, 0, 0, 0};
        int dy[5] = {0, 1, -1, 0, 0};
        int dz[5] = {0, 0, 0, 1, -1};

        for(int i=0; i<5; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            int nz = z + dz[i];

            if(nx >= N || ny < 0 || nz < 0 || ny >= M || nz >= K) continue;
            if(v[nx][ny][nz] == 'o' || dis[nx][ny][nz] != -1) continue;

            dis[nx][ny][nz] = dis[x][y][z] + 1;
            q.push({nx, ny, nz});
        }
    }
}
