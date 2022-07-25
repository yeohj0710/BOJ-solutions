#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int a, b; cin >> a >> b;

    vector<vector<int>> dis(N+1, vector<int>(M+1, -1));
    dis[1][1] = 0;

    queue<pair<int, int>> q;
    q.push({1, 1});

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if(x == a && y == b) {
            cout << dis[x][y] << "\n";
            return 0;
        }

        int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
        int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

        for(int i=0; i<8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx <= 0 || ny <= 0 || nx > N || ny > M) continue;
            if(dis[nx][ny] != -1) continue;

            dis[nx][ny] = dis[x][y] + 1;
            q.push({nx, ny});
        }
    }

    cout << "NEVAR\n";
}
