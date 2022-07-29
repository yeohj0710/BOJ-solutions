#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<int>> adj(N+1);

    while(true) {
        int a, b; cin >> a >> b;
        if(a == -1 && b == -1) break;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> u(N+1);

    for(int i=1; i<=N; i++) {
        vector<int> dis(N+1, -1);
        dis[i] = 0;

        queue<int> q;
        q.push(i);

        while(!q.empty()) {
            int x = q.front();
            q.pop();

            for(int j=0; j<adj[x].size(); j++) {
                int y = adj[x][j];

                if(dis[y] != -1) continue;

                dis[y] = dis[x] + 1;
                q.push(y);
            }
        }

        int Max = 0;
        for(int j=1; j<=N; j++)
            Max = max(Max, dis[j]);

        u[i] = Max;
    }

    int Min = INT_MAX;
    for(int i=1; i<=N; i++)
        Min = min(Min, u[i]);

    vector<int> ans;
    for(int i=1; i<=N; i++)
        if(u[i] == Min) ans.push_back(i);

    cout << Min << " " << ans.size() << "\n";
    for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}
