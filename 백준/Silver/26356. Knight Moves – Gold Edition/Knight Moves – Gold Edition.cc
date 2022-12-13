#include <bits/stdc++.h>
#define int long long
using namespace std;

struct P { int x, y; };

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, bx, by, ex, ey; cin >> N >> bx >> by >> ex >> ey;
        cin.ignore();

        queue<P> q;
        q.push({bx, by});

        vector<vector<int>> cnt(N+1, vector<int>(N+1, -1));
        cnt[bx][by] = 0;

        while(!q.empty()) {
            int x = q.front().x;
            int y = q.front().y;
            q.pop();

            if(x == ex && y == ey) break;

            int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
            int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

            for(int i=0; i<8; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(nx < 1 || ny < 1 || nx > N || ny > N) continue;
                if(cnt[nx][ny] != -1) continue;

                cnt[nx][ny] = cnt[x][y] + 1;
                q.push({nx, ny});
            }
        }

        cout << "Case #" << t << ": " << cnt[ex][ey] << "\n";
        cout << "\n";
    }
}
