#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    unordered_map<int, unordered_map<int, int>> m;
    queue<pair<int, int>> q;

    q.push({0, 0});

    int dx[6] = {0, 1, 1, 0, -1, -1};
    int dy[6] = {1, 0, -1, -1, 0, 1};

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second; q.pop();

        for(int i=0; i<6; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx == 0 && ny == 0) continue;
            if(nx < -1000 || ny < -1000 || nx > 1000 || ny > 1000) continue;
            if(m[nx][ny] != 0) continue;

            m[nx][ny] = m[x][y] + 1;
            q.push({nx, ny});
        }
    }

    int t; cin >> t;

    while(t--) {
        int a, b; cin >> a >> b;

        cout << m[a][b] << "\n";
    }
}
