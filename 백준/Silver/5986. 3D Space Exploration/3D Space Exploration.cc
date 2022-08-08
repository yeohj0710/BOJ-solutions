#include <bits/stdc++.h>
#define int long long
using namespace std;

int N;
vector<vector<vector<char>>> v;
vector<vector<vector<bool>>> vis;
struct s { int x, y, z; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    v.resize(N, vector<vector<char>>(N, vector<char>(N)));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            for(int k=0; k<N; k++) cin >> v[i][j][k];

    vis.resize(N, vector<vector<bool>>(N, vector<bool>(N)));

    int ans = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            for(int k=0; k<N; k++) {
                if(vis[i][j][k] || v[i][j][k] != '*') continue;

                vis[i][j][k] = true;

                queue<s> q;
                q.push({i, j, k});

                int dx[6] = {1, -1, 0, 0, 0, 0};
                int dy[6] = {0, 0, 1, -1, 0, 0};
                int dz[6] = {0, 0, 0, 0, 1, -1};

                while(!q.empty()) {
                    int x = q.front().x;
                    int y = q.front().y;
                    int z = q.front().z;
                    q.pop();

                    for(int l=0; l<6; l++) {
                        int nx = x + dx[l];
                        int ny = y + dy[l];
                        int nz = z + dz[l];

                        if(nx < 0 || ny < 0 || nz < 0 || nx >= N || ny >= N || nz >= N) continue;
                        if(v[nx][ny][nz] != '*' || vis[nx][ny][nz]) continue;

                        vis[nx][ny][nz] = true;
                        q.push({nx, ny, nz});
                    }
                }

                ans++;
            }

    cout << ans << "\n";
}
