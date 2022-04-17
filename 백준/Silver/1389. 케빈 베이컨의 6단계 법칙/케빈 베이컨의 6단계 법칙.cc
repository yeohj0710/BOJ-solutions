#include <bits/stdc++.h>
#define MAX 101
#define INF 100000000
using namespace std;

int dist[MAX][MAX] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    for(int i=0; i<M; i++) {
        int a, b; cin >> a >> b; // source, destination

        dist[a][b] = 1;
        dist[b][a] = 1;
    }

    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++) {
            if(i == j) continue;
            if(dist[i][j] == 0) dist[i][j] = INF;
        }

    for(int k=1; k<=N; k++)
        for(int i=1; i<=N; i++)
            for(int j=1; j<=N; j++)
                if(dist[i][k] != INF && dist[k][j] != INF)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

    vector<int> ans(N+1);
    int Min = INF;
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            if(dist[i][j] == INF) {
                ans[i] = INF;
                break;
            }
            else ans[i] += dist[i][j];
        }
        Min = min(Min, ans[i]);
    }

    for(int i=1; i<=N; i++)
        if(ans[i] == Min) {
            cout << i << "\n";
            return 0;
        }
}
