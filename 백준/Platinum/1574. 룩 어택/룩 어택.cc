#include <bits/stdc++.h>
using namespace std;
const int MAX = 305;

int R, C, N;
int Adj[MAX][MAX], Left[MAX], Right[MAX];
bool Visit[MAX];

bool DFS(int from) {
    Visit[from] = true;
    for(int i=1; i<=C; i++) {
        if(Adj[from][i] == 0) continue;
        int to = i;
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

    cin >> R >> C >> N;
    for(int i=1; i<=R; i++)
        for(int j=1; j<=C; j++) Adj[i][j] = 1;
    while(N--) {
        int x, y; cin >> x >> y;
        Adj[x][y] = 0;
    }

    int match = 0;
    fill(Left, Left+MAX, -1), fill(Right, Right+MAX, -1);
    for(int i=1; i<=R; i++) {
        fill(Visit, Visit+MAX, false);
        if(DFS(i)) match++;
    }

    cout << match;
}
