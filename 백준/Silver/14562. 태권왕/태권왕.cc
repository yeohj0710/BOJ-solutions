#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        vector<vector<int>> dis(1000, vector<int>(1000, -1));
        dis[a][b] = 0;

        queue<pair<int, int>> q;
        q.push({a, b});

        while(!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            if(x == y) {
                cout << dis[x][y] << "\n";
                break;
            }

            if(x*2 < 1000 && y+3 < 1000 && dis[x*2][y+3] == -1) {
                dis[x*2][y+3] = dis[x][y] + 1;
                q.push({x*2, y+3});
            }
            if(x+1 < 1000 && dis[x+1][y] == -1) {
                dis[x+1][y] = dis[x][y] + 1;
                q.push({x+1, y});
            }
        }
    }
}
