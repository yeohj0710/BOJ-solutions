#include <bits/stdc++.h>
#define MAX 405
using namespace std;

int dist[MAX][MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int V, E; cin >> V >> E;

    for(int i=1; i<=V; i++)
        for(int j=1; j<=V; j++) dist[i][j] = INT_MAX;

    for(int i=0; i<E; i++) {
        int a, b, c; cin >> a >> b >> c;

        dist[a][b] = c;
    }

    for(int k=1; k<=V; k++)
        for(int i=1; i<=V; i++)
            for(int j=1; j<=V; j++)
                if(dist[i][k] != INT_MAX && dist[k][j] != INT_MAX)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

    int ans = INT_MAX;
    for(int i=1; i<=V; i++)
        ans = min(ans, dist[i][i]);

    if(ans != INT_MAX) cout << ans;
    else cout << "-1";
}
