#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vector<int> dis(1e4 + 1, -1); dis[0] = 0;
    queue<int> q; q.push(0);

    while(!q.empty()) {
        int x = q.front(); q.pop();

        if(dis[x] >= M) continue;

        for(int i=0; i<N; i++) {
            if(dis[x + v[i]] != -1) continue;

            dis[x + v[i]] = dis[x] + 1;
            q.push(x + v[i]);
        }
    }

    int ans = 0, cnt = 0;

    for(int i=1; i<=1e4; i++) {
        if(dis[i] != -1) cnt++;
        else {
            ans = max(ans, cnt);
            cnt = 0;
        }
    }
    ans = max(ans, cnt);

    cout << ans << "\n";
}
