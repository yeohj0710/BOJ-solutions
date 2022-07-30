#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    for(int t=1; ; t++) {
        vector<vector<int>> adj(21);

        for(int i=1; i<=19; i++) {
            int N;
            if(!(cin >> N)) return 0;

            while(N--) {
                int x; cin >> x;

                adj[i].push_back(x);
                adj[x].push_back(i);
            }
        }

        cout << "Test Set #" << t << "\n";

        int M; cin >> M;

        while(M--) {
            int a, b; cin >> a >> b;

            vector<int> dis(21, -1);
            dis[a] = 0;

            queue<int> q;
            q.push(a);

            while(!q.empty()) {
                int x = q.front();
                q.pop();

                if(x == b) {
                    printf("%2d to %2d: %d\n", a, b, dis[b]);
                    break;
                }

                for(int i=0; i<adj[x].size(); i++) {
                    int y = adj[x][i];

                    if(dis[y] != -1) continue;

                    dis[y] = dis[x] + 1;
                    q.push(y);
                }
            }
        }

        cout << "\n";
    }
}
