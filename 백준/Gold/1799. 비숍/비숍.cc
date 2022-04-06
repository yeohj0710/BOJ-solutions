#include <bits/stdc++.h>
using namespace std;
const int MSIZE = 105, MAX = 5005;

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

    int N; cin >> N;
    int Board[MSIZE][MSIZE] = {};
    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++) cin >> Board[i][j];

    int rNum[MSIZE][MSIZE] = {}, cNum[MSIZE][MSIZE] = {}, cnt = 1;
    for(int k=-(N-1); k<=N-1; k++) {
        int i, j;
        if(k < 0) i = 1, j = i-k;
        else j = 1, i = j+k;
        while(i <= N && j <= N) {
            rNum[i][j] = cnt;
            if(i == N || j == N) cnt++;
            i++, j++;
        }
    }
    int rCnt = cnt; cnt = 1;
    for(int k=2; k<=N*2; k++) {
        int i, j;
        if(k <= N) i = 1, j = k-i;
        else j = N, i = k-j;
        while(i <= N && j >= 1) {
            cNum[i][j] = cnt;
            if(i == N || j == 1) cnt++;
            i++, j--;
        }
    }

    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++)
            if(Board[i][j]) Adj[rNum[i][j]].push_back(cNum[i][j]);

    int match = 0;
    fill(Left, Left+MAX, -1), fill(Right, Right+MAX, -1);
    for(int i=1; i<=rCnt; i++) {
        fill(Visit, Visit+MAX, false);
        if(DFS(i)) match++;
    }

    cout << match;
}
