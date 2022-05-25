#include <bits/stdc++.h>
#define int long long
using namespace std;

char v[151][151];
int cnt[151][151];
struct P { int x, y; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> M >> N;
    cin.ignore();

    queue<P> q;
    memset(cnt, -1, sizeof(cnt));

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> v[i][j];
            if(v[i][j] == 'K') {
                q.push({i, j});
                cnt[i][j] = 0;
            }
        }
        cin.ignore();
    }

    while(!q.empty()) {
        int x = q.front().x;
        int y = q.front().y;
        q.pop();

        if(v[x][y] == 'H') {
            cout << cnt[x][y] << "\n";
            break;
        }

        int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
        int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

        for(int i=0; i<8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if(v[nx][ny] == '*' || cnt[nx][ny] != -1) continue;

            cnt[nx][ny] = cnt[x][y] + 1;
            q.push({nx, ny});
        }
    }
}
