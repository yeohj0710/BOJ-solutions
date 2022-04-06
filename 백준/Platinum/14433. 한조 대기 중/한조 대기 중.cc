#include <bits/stdc++.h>
using namespace std;
const int MAX = 2505;

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

    int N, M, K1, K2;
    cin >> N >> M >> K1 >> K2;

    while(K1--) {
        int from, to;
        cin >> from >> to;
        Adj[from].push_back(to);
    }

    int match1 = 0;
    fill(Left, Left+MAX, -1), fill(Right, Right+MAX, -1);
    for(int i=1; i<=N; i++) {
        fill(Visit, Visit+MAX, false);
        if(DFS(i)) match1++;
    }

    for(int i=1; i<=N; i++) vector<int>().swap(Adj[i]);
    while(K2--) {
        int from, to;
        cin >> from >> to;
        Adj[from].push_back(to);
    }

    int match2 = 0;
    fill(Left, Left+MAX, -1), fill(Right, Right+MAX, -1);
    for(int i=1; i<=N; i++) {
        fill(Visit, Visit+MAX, false);
        if(DFS(i)) match2++;
    }

    if(match1 < match2) cout << "네 다음 힐딱이";
    else cout << "그만 알아보자";
}
