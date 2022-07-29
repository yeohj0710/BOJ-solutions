#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M;
int adj[1001][1001] = {};
bool check[1001][1001] = {};
vector<bool> vis;

void f(int x) {
    vis[x] = true;

    for(int i=0; i<N; i++) {
        if(adj[x][i] != -1 && !vis[i]) {
            check[x][i] = true;

            f(i);
        }
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) adj[i][j] = -1;

    for(int i=0; i<N-1; i++) {
        int a, b, c; cin >> a >> b >> c;

        adj[b][a] = c;
    }

    while(M--) {
        int x; cin >> x;

        vis.clear();
        vis.resize(N);

        f(x);
    }

    int ans = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            if(check[i][j]) ans += adj[i][j] * 2;

    cout << ans << "\n";
}
