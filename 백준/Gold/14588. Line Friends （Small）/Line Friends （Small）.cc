#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i].first >> v[i].second;

    vector<vector<int>> adj(N+1);
    for(int i=1; i<=N; i++)
        for(int j=i+1; j<=N; j++) {
            bool check = false;

            if(v[i].first <= v[j].first && v[j].first <= v[i].second && v[i].second <= v[j].second) check = true;
            if(v[j].first <= v[i].first && v[i].first <= v[j].second && v[j].second <= v[i].second) check = true;
            if(v[i].first <= v[j].first && v[j].second <= v[i].second) check = true;
            if(v[j].first <= v[i].first && v[i].second <= v[j].second) check = true;

            if(check) {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }

    int M; cin >> M;

    while(M--) {
        int a, b; cin >> a >> b;

        vector<int> dis(N+1, -1);
        dis[a] = 0;

        queue<int> q;
        q.push(a);

        bool check = false;

        while(!q.empty()) {
            int x = q.front();
            q.pop();

            if(x == b) {
                cout << dis[b] << "\n";
                check = true;
                break;
            }

            for(int i=0; i<adj[x].size(); i++) {
                int y = adj[x][i];

                if(dis[y] != -1) continue;

                dis[y] = dis[x] + 1;
                q.push(y);
            }
        }

        if(!check) cout << -1 << "\n";
    }
}
