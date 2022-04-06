#include <bits/stdc++.h>
using namespace std;
const int MAX = 505;

vector<int> Adj[MAX];
int Left[MAX], Right[MAX];
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

    int N, K; cin >> N >> K;
    while(K--) {
        int x, y; cin >> x >> y;
        Adj[x].push_back(y);
    }

    int match = 0;
    fill(Left, Left+MAX, -1), fill(Right, Right+MAX, -1);
    for(int i=1; i<=N; i++) {
        fill(Visit, Visit+MAX, false);
        if(DFS(i)) match++;
    }

    cout << match;
}
