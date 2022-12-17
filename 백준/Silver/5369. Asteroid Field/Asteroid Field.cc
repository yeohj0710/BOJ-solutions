#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        struct s { int x, y; };

        queue<s> q;
        vector<vector<char>> v(N, vector<char>(N));
        vector<vector<int>> cnt(N, vector<int>(N, -1));

        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                cin >> v[i][j];
                if(v[i][j] == 's') {
                    q.push({i, j});
                    cnt[i][j] = 0;
                }
            }
            cin.ignore();
        }

        bool check = false;

        while(!q.empty()) {
            int x = q.front().x;
            int y = q.front().y;
            q.pop();

            if(v[x][y] == 'd') {
                cout << cnt[x][y] << "\n";
                check = true;
                break;
            }

            int dx[4] = {1, -1, 0, 0};
            int dy[4] = {0, 0, 1, -1};

            for(int i=0; i<4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
                if(v[nx][ny] == '*' || cnt[nx][ny] != -1) continue;

                cnt[nx][ny] = cnt[x][y] + 1;
                q.push({nx, ny});
            }
        }

        if(!check) cout << -1 << "\n";
    }
}
