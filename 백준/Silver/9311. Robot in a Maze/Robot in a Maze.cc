#include <bits/stdc++.h>
#define int long long
using namespace std;

struct P { int x, y; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;
        cin.ignore();

        vector<vector<char>> v(N, vector<char>(M));
        vector<vector<int>> cnt(N, vector<int>(M, -1));

        queue<P> q;

        for(int i=0; i<N; i++) {
            for(int j=0; j<M; j++) {
                cin >> v[i][j];
                if(v[i][j] == 'S') {
                    q.push({i, j});
                    cnt[i][j] = 0;
                }
            }
            cin.ignore();
        }

        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};

        bool check = false;

        while(!q.empty()) {
            int x = q.front().x;
            int y = q.front().y;
            q.pop();

            if(v[x][y] == 'G') {
                cout << "Shortest Path: " << cnt[x][y] << "\n";
                check = true;
                break;
            }

            for(int i=0; i<4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
                if(cnt[nx][ny] != -1 || v[nx][ny] == 'X') continue;

                cnt[nx][ny] = cnt[x][y] + 1;
                q.push({nx, ny});
            }
        }

        if(!check) cout << "No Exit\n";
    }
}
