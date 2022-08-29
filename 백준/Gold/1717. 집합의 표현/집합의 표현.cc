#include<bits/stdc++.h>
using namespace std;

vector<int> parent;

int root(int v) {
    if(parent[v] == v) return v;
    return parent[v] = root(parent[v]);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    parent.resize(N+1);
    for(int i=0; i<=N; i++) parent[i] = i;

    while(M--) {
        int Q, u, v; cin >> Q >> u >> v;

        if(Q == 0) {
            u = root(u);
            v = root(v);

            if(u != v) parent[u] = v;
        }
        else if(Q == 1) {
            if(root(u) == root(v)) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
