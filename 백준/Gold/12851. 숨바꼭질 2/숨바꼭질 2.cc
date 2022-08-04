#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<bool> vis(1e5 + 1);

    queue<pair<int, int>> q;
    q.push({N, 0});

    int dis, cnt = 0;

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        vis[x] = true;

        if(x == M) {
            if(cnt == 0) {
                dis = y;
                cnt++;
            }
            else if(y == dis) cnt++;
        }

        if(x-1 >= 0 && !vis[x-1]) q.push({x-1, y+1});
        if(x+1 <= 1e5 && !vis[x+1]) q.push({x+1, y+1});
        if(x*2 <= 1e5 && !vis[x*2]) q.push({x*2, y+1});
    }

    cout << dis << "\n" << cnt << "\n";
}
