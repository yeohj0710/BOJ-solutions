#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> v;
vector<bool> vis;

void f(int curr) {
    vis[curr] = true;

    for(int i=0; i<v[curr].size(); i++) {
        int next = v[curr][i];

        if(!vis[next]) f(next);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        v.clear();
        v.resize(N+1);

        vis.clear();
        vis.resize(N+1);

        while(M--) {
            int a, b; cin >> a >> b;

            v[a].push_back(b);
            v[b].push_back(a);
        }

        int ans = 0;
        for(int i=1; i<=N; i++)
            if(!vis[i]) {
                f(i);
                ans++;
            }

        cout << "Case " << t << ": " << ans << "\n";
    }
}
