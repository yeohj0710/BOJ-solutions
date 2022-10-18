#include <bits/stdc++.h>
using namespace std;
const int MAX = 205;

int cow[MAX], shed[MAX];
vector<int> adj[MAX];
bool visited[MAX];

bool dfs(int from) {
    visited[from] = true;
    for(int i=0; i<adj[from].size(); i++) {
        int to = adj[from][i];
        if(shed[to] == -1 || (!visited[shed[to]] && dfs(shed[to]))) {
            cow[from] = to, shed[to] = from;
            return true;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;
    for(int from=1; from<=N; from++) {
        int S; cin >> S;
        while(S--) {
            int to; cin >> to;
            adj[from].push_back(to);
        }
    }

    int match = 0;
    fill(&cow[1], &cow[N+1], -1), fill(&shed[1], &shed[M+1], -1);
    for(int i=1; i<=N; i++)
        if(cow[i] == -1) {
            fill(&visited[1], &visited[N+1], false);
            if(dfs(i)) match++;
        }
    cout << match;
}
