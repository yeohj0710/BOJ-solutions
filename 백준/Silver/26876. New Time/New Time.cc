#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int bx, by, ex, ey; char ch;

    cin >> bx >> ch >> by;
    cin >> ex >> ch >> ey;

    vector<vector<int>> dis(25, vector<int>(61, -1));
    dis[bx][by] = 0;

    queue<pair<int, int>> q;
    q.push({bx, by});

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if(x == ex && y == ey) break;

        int nx, ny;

        if(y < 59) nx = x, ny = y + 1;
        else if(x < 23 && y == 59) nx = x + 1, ny = 0;
        else if(x == 23 && y == 59) nx = 0, ny = 0;

        if(dis[nx][ny] == -1) {
            dis[nx][ny] = dis[x][y] + 1;
            q.push({nx, ny});
        }

        if(x < 23) nx = x + 1, ny = y;
        else if(x == 23) nx = 0, ny = y;

        if(dis[nx][ny] == -1) {
            dis[nx][ny] = dis[x][y] + 1;
            q.push({nx, ny});
        }
    }

    cout << dis[ex][ey] << "\n";
}
