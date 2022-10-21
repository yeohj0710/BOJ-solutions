#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<int> l, r;
vector<bool> vis;

bool f(int x) {
    vis[x] = true;

    for(int i=0; i<adj[x].size(); i++) {
        int y = adj[x][i];

        if(r[y] == -1 || (!vis[r[y]] && f(r[y]))) {
            l[x] = y, r[y] = x;

            return true;
        }
    }

    return false;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> minv(N+1, 1), maxv(N+1, N);
    vector<int> minr(N+1, 1), maxr(N+1, N);

    while(M--) {
        int Q, a, b, c; cin >> Q >> a >> b >> c;

        if(Q == 1) {
            for(int i=a; i<=b; i++) maxv[i] = min(maxv[i], c);
        }
        else if(Q == 2) {
            for(int i=a; i<=b; i++) minv[i] = max(minv[i], c);
        }

        minr[c] = max(minr[c], a);
        maxr[c] = min(maxr[c], b);
    }

    adj.resize(N+1);

    for(int i=1; i<=N; i++)
        for(int j=minv[i]; j<=maxv[i]; j++)
            if(minr[j] <= i && i <= maxr[j]) adj[i].push_back(j);

    l.resize(N+1, -1);
    r.resize(N+1, -1);

    int match = 0;

    for(int i=1; i<=N; i++) {
        vis.clear();
        vis.resize(N+1);

        if(f(i)) match++;
    }

    if(match < N) {
        cout << -1 << "\n";
        return 0;
    }

    for(int i=1; i<=N; i++) cout << l[i] << " ";
    cout << "\n";
}
