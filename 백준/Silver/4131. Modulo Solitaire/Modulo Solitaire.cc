#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int M, N, S; cin >> M >> N >> S;

    vector<pair<int, int>> v(N);
    for(int i=0; i<N; i++) cin >> v[i].first >> v[i].second;

    vector<int> dis(1e6 + 1, -1);
    dis[S] = 0;

    queue<int> q;
    q.push(S);

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        if(x == 0) {
            cout << dis[0] << "\n";
            return 0;
        }

        for(int i=0; i<N; i++) {
            int y = (x * v[i].first + v[i].second) % M;

            if(y > 1e6) continue;
            if(dis[y] != -1) continue;

            dis[y] = dis[x] + 1;
            q.push(y);
        }
    }

    cout << -1 << "\n";
}
