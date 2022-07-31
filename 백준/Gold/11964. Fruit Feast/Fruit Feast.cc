#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, a, b; cin >> N >> a >> b;

    vector<vector<bool>> vis(N+1, vector<bool>(2));
    vis[0][0] = true;

    queue<pair<int, int>> q;
    q.push({0, 0});

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if(x + a <= N && !vis[x + a][y]) {
            vis[x + a][y] = true;
            q.push({x + a, y});
        }
        if(x + b <= N && !vis[x + b][y]) {
            vis[x + b][y] = true;
            q.push({x + b, y});
        }
        if(y == 0 && !vis[x/2][y + 1]) {
            vis[x/2][y + 1] = true;
            q.push({x/2, y + 1});
        }
    }

    int ans = 0;
    for(int i=0; i<=N; i++)
        if(vis[i][0] || vis[i][1]) ans = i;

    cout << ans << "\n";
}
