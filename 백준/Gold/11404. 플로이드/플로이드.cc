#include <bits/stdc++.h>
#define MAX 105
using namespace std;

int dist[MAX][MAX] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, m; cin >> n >> m;

    for(int i=0; i<m; i++) {
        int a, b, c; cin >> a >> b >> c;

        if(dist[a][b] != 0) dist[a][b] = min(dist[a][b], c);
        else dist[a][b] = c;
    }

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(i != j && dist[i][j] == 0) dist[i][j] = INT_MAX;

    for(int k=1; k<=n; k++)
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
                if(dist[i][k] != INT_MAX && dist[k][j] != INT_MAX)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(dist[i][j] == INT_MAX) cout << "0 ";
            else cout << dist[i][j] << " ";
        }
        cout << "\n";
    }
}
