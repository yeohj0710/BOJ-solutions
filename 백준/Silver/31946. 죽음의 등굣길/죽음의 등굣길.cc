#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m));

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++) cin >> v[i][j];

    int k; cin >> k;

    struct s { int x, y; };

    queue<s> q; q.push({0, 0});
    vector<vector<bool>> vis(n, vector<bool>(m)); vis[0][0] = true;

    bool chk = false;

    while(!q.empty()) {
        int x = q.front().x;
        int y = q.front().y; q.pop();

        if(x == n-1 && y == m-1) {
            chk = true;
            break;
        }

        for(int i=x-k; i<=x+k; i++)
            for(int j=y-k; j<=y+k; j++) {
                if(i < 0 || j < 0 || i >= n || j >= m) continue;
                if(abs(i - x) + abs(j - y) > k) continue;

                if(vis[i][j]) continue;
                if(v[i][j] != v[0][0]) continue;

                vis[i][j] = true;
                q.push({i, j});
            }
    }

    if(chk) cout << "ALIVE\n";
    else cout << "DEAD\n";
}
