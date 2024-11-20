#include <bits/stdc++.h>
#define int long long
using namespace std;



int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m));

    struct s { int x, y; };
    vector<s> u;

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++) {
            cin >> v[i][j];

            if(v[i][j] == 0) u.push_back({i, j});
        }

    int ans = 0;

    for(int i=0; i<u.size(); i++)
        for(int j=i+1; j<u.size(); j++)
            for(int k=j+1; k<u.size(); k++) {
                vector<vector<int>> vv = v;

                vv[u[i].x][u[i].y] = vv[u[j].x][u[j].y] = vv[u[k].x][u[k].y] = 1;

                vector<vector<bool>> vis(n, vector<bool>(m));

                for(int ii=0; ii<n; ii++)
                    for(int jj=0; jj<m; jj++) {
                        if(vis[ii][jj] || vv[ii][jj] != 2) continue;

                        queue<s> q; q.push({ii, jj});

                        while(!q.empty()) {
                            int x = q.front().x, y = q.front().y;
                            q.pop();

                            int dx[4] = {1, -1, 0, 0};
                            int dy[4] = {0, 0, 1, -1};

                            for(int kk=0; kk<4; kk++) {
                                int nx = x + dx[kk], ny = y + dy[kk];

                                if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
                                if(vis[nx][ny] || vv[nx][ny] != 0) continue;

                                vv[nx][ny] = 2;
                                vis[nx][ny] = true;
                                q.push({nx, ny});
                            }
                        }
                    }

                int cnt = 0;

                for(int ii=0; ii<n; ii++)
                    for(int jj=0; jj<m; jj++)
                        if(vv[ii][jj] == 0) cnt++;

                ans = max(ans, cnt);
            }

    cout << ans << "\n";
}
