#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        vector<vector<int>> adj(N+1);

        while(M--) {
            string a, b; cin >> a >> b;

            int x = stoi(a.substr(1, a.length()-1));
            int y = stoi(b.substr(1, b.length()-1));

            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        string str; cin >> str;
        int s = stoi(str.substr(1, str.length()-1));

        vector<int> vis(N+1, -1);
        vis[s] = 0;

        queue<int> q;
        q.push(s);

        while(!q.empty()) {
            int x = q.front();
            q.pop();

            for(int i=0; i<adj[x].size(); i++) {
                int y = adj[x][i];

                if(vis[y] == -1) {
                    vis[y] = vis[x] + 1;
                    q.push(y);
                }
            }
        }

        int ans = 0;
        for(int i=1; i<=N; i++)
            if(vis[i] == 1 || vis[i] == 2) ans++;

        cout << "The number of supervillains in 2-hop neighborhood of v"
              << s << " is " << ans << "\n";
    }
}
