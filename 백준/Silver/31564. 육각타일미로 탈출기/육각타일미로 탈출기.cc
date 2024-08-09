#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m, k; cin >> n >> m >> k;

    vector<vector<int>> v(n, vector<int>(m, -1));
    v[0][0] = 0;

    queue<pair<int, int>> q;
    q.push({0, 0});

    unordered_map<int, unordered_map<int, bool>> mp;

    while(k--) {
        int a, b; cin >> a >> b;

        mp[a][b] = true;
    }

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second; q.pop();

        if(x == n-1 && y == m-1) {
            cout << v[n-1][m-1] << "\n";
            return 0;
        }

        vector<int> dx, dy;

        if(x % 2 == 1) {
            dx = {-1, 0, 1, 1, 0, -1};
            dy = {1, 1, 1, 0, -1, 0};
        }
        else {
            dx = {-1, 0, 1, 1, 0, -1};
            dy = {0, 1, 0, -1, -1, -1};
        }

        for(int i=0; i<6; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(v[nx][ny] != -1) continue;
            if(mp[nx][ny]) continue;

            v[nx][ny] = v[x][y] + 1;
            q.push({nx, ny});
        }
    }

    cout << -1 << "\n";
}
