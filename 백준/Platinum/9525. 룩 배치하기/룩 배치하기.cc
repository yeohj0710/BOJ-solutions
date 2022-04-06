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
    char Map[MSIZE][MSIZE];
    for(int i=1; i<=N; i++) {
        cin.clear();
        for(int j=1; j<=N; j++) cin >> Map[i][j];
    }

    int rNum[MSIZE][MSIZE] = {}, cNum[MSIZE][MSIZE] = {}, cnt = 1;
    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++)
            if(Map[i][j] == '.') {
                rNum[i][j] = cnt;
                if(j == N || Map[i][j+1] == 'X') cnt++;
            }
    int rCnt = cnt; cnt = 1;
    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++)
            if(Map[j][i] == '.') {
                cNum[j][i] = cnt;
                if(j == N || Map[j+1][i] == 'X') cnt++;
            }

    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++)
            if(Map[i][j] == '.') Adj[rNum[i][j]].push_back(cNum[i][j]);

    int match = 0;
    fill(Left, Left+MAX, -1), fill(Right, Right+MAX, -1);
    for(int i=1; i<=rCnt; i++) {
        fill(Visit, Visit+MAX, false);
        if(DFS(i)) match++;
    }

    cout << match;
}
