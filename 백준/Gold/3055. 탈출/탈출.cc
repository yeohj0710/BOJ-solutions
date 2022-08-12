#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<char>> v(N, vector<char>(M));
    vector<vector<int>> dis(N, vector<int>(M, -1));

    queue<pair<int, int>> q, qq;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            cin >> v[i][j];

            if(v[i][j] == 'S') {
                dis[i][j] = 0;
                q.push({i, j});
            }
            else if(v[i][j] == '*') qq.push({i, j});
        }

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    while(!q.empty()) {
        int s = qq.size();

        while(s--) {
            int x = qq.front().first;
            int y = qq.front().second;
            qq.pop();

            for(int i=0; i<4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
                if(v[nx][ny] != '.' && v[nx][ny] != 'S') continue;

                v[nx][ny] = '*';
                qq.push({nx, ny});
            }
        }

        s = q.size();

        while(s--) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            if(v[x][y] == 'D') {
                cout << dis[x][y] << "\n";
                return 0;
            }

            for(int i=0; i<4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
                if((v[nx][ny] != '.' && v[nx][ny] != 'D') || dis[nx][ny] != -1) continue;

                dis[nx][ny] = dis[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    cout << "KAKTUS\n";
}
