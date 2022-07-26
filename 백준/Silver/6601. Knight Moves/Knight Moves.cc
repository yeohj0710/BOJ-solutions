#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b;

    while(cin >> a >> b) {
        int bx = a[0] - 'a' + 1, by = a[1] - '0';
        int ex = b[0] - 'a' + 1, ey = b[1] - '0';

        vector<vector<int>> dis(9, vector<int>(9, -1));
        dis[bx][by] = 0;

        queue<pair<int, int>> q;
        q.push({bx, by});

        while(!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            if(x == ex && y == ey) {
                cout << "To get from " << a << " to " << b << " takes "
                      << dis[ex][ey] << " knight moves.\n";
                break;
            }

            int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
            int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

            for(int i=0; i<8; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(nx <= 0 || ny <= 0 || nx > 8 || ny > 8) continue;
                if(dis[nx][ny] != -1) continue;

                dis[nx][ny] = dis[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
}
