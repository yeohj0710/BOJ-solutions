#include <bits/stdc++.h>
using namespace std;

struct S { int x, y; };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int X, Y, N; cin >> X >> Y >> N;
    X += 501, Y += 501;

    vector<vector<int>> v(1002, vector<int>(1002, -1));
    v[501][501] = 0;

    while(N--) {
        int x, y; cin >> x >> y;
        v[x+501][y+501] = -2;
    }

    queue<S> q;
    q.push({501, 501});

    while(!q.empty()) {
        int x = q.front().x;
        int y = q.front().y;
        q.pop();

        if(x == X && y == Y) {
            cout << v[x][y] << "\n";
            break;
        }

        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};

        for(int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx > 1000 || ny > 1000) continue;
            if(v[nx][ny] != -1) continue;

            v[nx][ny] = v[x][y] + 1;
            q.push({nx, ny});
        }
    }
}
