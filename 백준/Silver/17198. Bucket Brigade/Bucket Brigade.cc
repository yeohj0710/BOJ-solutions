#include <bits/stdc++.h>
#define int long long
using namespace std;

struct P { int x, y; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<vector<char>> v(10, vector<char>(10));
    vector<vector<int>> cnt(10, vector<int>(10, -1));

    queue<P> q;

    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            cin >> v[i][j];
            if(v[i][j] == 'L') {
                q.push({i, j});
                cnt[i][j] = 0;
            }
        }
        cin.ignore();
    }

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    while(!q.empty()) {
        int x = q.front().x;
        int y = q.front().y;
        q.pop();

        if(v[x][y] == 'B') {
            cout << cnt[x][y] - 1 << "\n";
            break;
        }

        for(int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= 10 || ny >= 10) continue;
            if(cnt[nx][ny] != -1 || v[nx][ny] == 'R') continue;

            cnt[nx][ny] = cnt[x][y] + 1;
            q.push({nx, ny});
        }
    }
}
