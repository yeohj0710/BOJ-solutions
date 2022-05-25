#include <bits/stdc++.h>
#define int long long
using namespace std;

char v[9][9];
int cnt[9][9];
struct P { int x, y; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c, d; cin >> a >> b >> c >> d;

    queue<P> q;
    q.push({a, b});

    memset(cnt, -1, sizeof(cnt));
    cnt[a][b] = 0;

    while(!q.empty()) {
        int x = q.front().x;
        int y = q.front().y;
        q.pop();

        if(x == c && d == y) {
            cout << cnt[x][y] << "\n";
            break;
        }

        int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
        int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

        for(int i=0; i<8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx <= 0 || ny <= 0 || nx > 8 || ny > 8) continue;
            if(v[nx][ny] == '*' || cnt[nx][ny] != -1) continue;

            cnt[nx][ny] = cnt[x][y] + 1;
            q.push({nx, ny});
        }
    }
}
