#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(M);
    for(int i=0; i<M; i++) cin >> v[i];

    vector<vector<int>> dis(N+1, vector<int>(N+1));
    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++) cin >> dis[i][j];

    for(int k=1; k<=N; k++)
        for(int i=1; i<=N; i++)
            for(int j=1; j<=N; j++)
                dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);

    int ans = 0;
    for(int i=1; i<M; i++) ans += dis[v[i-1]][v[i]];

    cout << ans << "\n";
}
