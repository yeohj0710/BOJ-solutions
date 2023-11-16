#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N, vector<int>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            char ch; cin >> ch;

            if(ch == '1') v[i][j] = 1;
            else v[i][j] = 0;
        }

    vector<vector<bool>> vis(N, vector<bool>(M));
    vector<int> u;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(v[i][j] == 1 && !vis[i][j]) {
                queue<pair<int, int>> q;
                q.push({i, j});
                vis[i][j] = true;
                int cnt = 1;

                while(!q.empty()) {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();

                    int dx[4] = {1, -1, 0, 0};
                    int dy[4] = {0, 0, 1, -1};

                    for(int k=0; k<4; k++) {
                        int nx = x + dx[k];
                        int ny = y + dy[k];

                        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
                        if(v[nx][ny] != 1 || vis[nx][ny]) continue;

                        vis[nx][ny] = true;
                        cnt++;
                        q.push({nx, ny});
                    }
                }

                u.push_back(cnt);
            }

    sort(u.begin(), u.end());

    cout << u.size() << "\n";

    for(int i=0; i<u.size(); i++) cout << u[i] << " ";
    cout << "\n";
}
