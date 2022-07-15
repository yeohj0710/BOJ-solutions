#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<pair<int, int>> v(N+M);
    for(int i=0; i<v.size(); i++)
        cin >> v[i].first >> v[i].second;

    queue<int> q;
    q.push(1);

    vector<int> vis(101, -1);
    vis[1] = 0;

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        if(x == 100) {
            cout << vis[x] << "\n";
            break;
        }

        for(int i=1; i<=6; i++) {
            int y = x + i;

            for(int i=0; i<v.size(); i++)
                if(y == v[i].first) y = v[i].second;

            if(vis[y] != -1) continue;

            q.push(y);
            vis[y] = vis[x] + 1;
        }
    }
}
