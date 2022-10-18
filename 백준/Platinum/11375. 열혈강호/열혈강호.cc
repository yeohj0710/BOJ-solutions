#include <bits/stdc++.h>
using namespace std;
const int MAX = 1005;

int Left[MAX], Right[MAX];
vector<int> Adj[MAX];
bool Visit[MAX];

bool DFS(int from) {
    Visit[from] = true;
    for(int i=0; i<Adj[from].size(); i++) {
        int to = Adj[from][i];
        if(Right[to] == -1 || (!Visit[Right[to]] && DFS(Right[to]))) {
            Left[from] = to, Right[to] = from;
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
            Adj[from].push_back(to);
        }
    }

    int match = 0;
    fill(&Left[1], &Left[MAX], -1), fill(&Right[1], &Right[MAX], -1);
    for(int i=1; i<=N; i++)
        if(Left[i] == -1) {
            fill(&Visit[1], &Visit[MAX], false);
            if(DFS(i)) match++;
        }
    cout << match;
}
