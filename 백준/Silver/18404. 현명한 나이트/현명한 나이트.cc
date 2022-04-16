#include <bits/stdc++.h>
#define MAX 501
using namespace std;

struct Point { int x, y; };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int kx, ky; cin >> kx >> ky; // i, j of knight

    vector<Point> point(M); // <i, j>
    for(int i=0; i<M; i++)
        cin >> point[i].x >> point[i].y;

    queue<Point> Q;
    Q.push({kx, ky});

    int cnt[MAX][MAX] = {};
    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++) cnt[i][j] = -1;
    cnt[kx][ky] = 0;

    vector<int> ans(M);
    for(int i=0; i<ans.size(); i++) ans[i] = -1;

    int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

    while(!Q.empty()) {
        int x = Q.front().x;
        int y = Q.front().y;

        Q.pop();

        for(int i=0; i<8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 1 || ny < 1 || nx > N || ny > N) continue;
            if(cnt[nx][ny] != -1) continue;

            Q.push({nx, ny});
            cnt[nx][ny] = cnt[x][y] + 1;

            for(int j=0; j<M; j++)
                if(ans[j] == -1 && point[j].x == nx && point[j].y == ny)
                    ans[j] = cnt[x][y] + 1;
        }
    }

    for(int i=0; i<M; i++)
        cout << ans[i] << " ";
}
