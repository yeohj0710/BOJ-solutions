#include <bits/stdc++.h>
#define MAX 1000005
using namespace std;

bool visited[MAX];
int dp[MAX][2] = {};
vector<int> edge[MAX], child[MAX];

void findChild(int node) {
    visited[node] = true;
    for(int i=0; i<edge[node].size(); i++) {
        int next = edge[node][i];
        if(!visited[next]) {
            child[node].push_back(next);
            findChild(next);
        }
    }
}

int recordDP(int node, bool isEA) {
    if(dp[node][isEA] != 0) return dp[node][isEA];
    if(child[node].size() == 0) return dp[node][isEA] = isEA;
    if(isEA) {
        int ans = 0;
        for(int i=0; i<child[node].size(); i++) {
            int next = child[node][i];
            ans += min(recordDP(next, true), recordDP(next, false));
        }
        return dp[node][isEA] = ans + 1;
    }
    else {
        int ans = 0;
        for(int i=0; i<child[node].size(); i++) {
            int next = child[node][i];
            ans += recordDP(next, true);
        }
        return dp[node][isEA] = ans;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    for(int i=0; i<N-1; i++) {
        int u, v; cin >> u >> v;
        edge[u].push_back(v), edge[v].push_back(u);
    }
    findChild(1);
    cout << min(recordDP(1, true), recordDP(1, false));
}
