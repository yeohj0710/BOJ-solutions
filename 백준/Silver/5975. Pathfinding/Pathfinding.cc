#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> adj(N+1, vector<int>(N+1));

    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++) cin >> adj[i][j];

    vector<int> dis(N+1, -1);
    dis[M] = 0;

    queue<int> q;
    q.push(M);

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        for(int i=1; i<=N; i++) {
            if(adj[x][i] == 0) continue;
            if(dis[i] != -1) continue;

            dis[i] = dis[x] + 1;
            q.push(i);
        }
    }

    int Max = 0;
    for(int i=1; i<=N; i++)
        Max = max(Max, dis[i]);

    for(int i=0; i<=Max; i++) {
        for(int j=1; j<=N; j++)
            if(dis[j] == i) cout << j << " ";
        cout << "\n";
    }
}
