#include <bits/stdc++.h>
#define MAX 20001
using namespace std;

vector<int> edge[MAX];
int check[MAX] = {};

bool DFS(int curr, int group) {
    check[curr] = group;
    for(int i=0; i<edge[curr].size(); i++) {
        int next = edge[curr][i];
        if(!check[next] && !DFS(next, -group)) return false;
        if(check[next] && check[next] == check[curr]) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    while(T--) {
        int V, E; cin >> V >> E;

        for(int i=1; i<=V; i++) {
            edge[i].clear();
            check[i] = 0;
        }

        for(int i=0; i<E; i++) {
            int u, v; cin >> u >> v;
            edge[u].push_back(v);
            edge[v].push_back(u);
        }

        bool ans = true;
        for(int i=1; i<=V; i++) {
            if(!check[i] && !DFS(i, 1)) {
                ans = false;
                break;
            }
        }

        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
}
