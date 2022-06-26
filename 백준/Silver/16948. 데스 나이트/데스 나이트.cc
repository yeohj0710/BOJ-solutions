#include <bits/stdc++.h>
#define int long long
using namespace std;

char v[201][201];
int cnt[201][201];
struct P { int x, y; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

    queue<P> q;
    memset(cnt, -1, sizeof(cnt));

    q.push({x1, y1});
    cnt[x1][y1] = 0;

    while(!q.empty()) {
        int x = q.front().x;
        int y = q.front().y;
        q.pop();

        if(x == x2 && y == y2) {
            cout << cnt[x][y] << "\n";
            return 0;
        }

        int dx[8] = {-2, -2, 0, 0, 2, 2};
        int dy[8] = {-1, 1, -2, 2, -1, 1};

        for(int i=0; i<6; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
            if(v[nx][ny] == '*' || cnt[nx][ny] != -1) continue;

            cnt[nx][ny] = cnt[x][y] + 1;
            q.push({nx, ny});
        }
    }

    cout << -1 << "\n";
}
