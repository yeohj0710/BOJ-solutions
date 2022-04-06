#include <bits/stdc++.h>
using namespace std;
const int MAX = 55;

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

    int N, val[MAX][3]; cin >> N;
    for(int i=1; i<=N; i++) cin >> val[i][0] >> val[i][1] >> val[i][2];

    for(int i=1; i<=N; i++)
        for(int j=i+1; j<=N; j++) {
            if(val[i][0] == val[j][0] && val[i][1] == val[j][1] && val[i][2] == val[j][2])
                Adj[i].push_back(j);
            else if(val[i][0] >= val[j][0] && val[i][1] >= val[j][1] && val[i][2] >= val[j][2])
                Adj[i].push_back(j);
            else if(val[i][0] <= val[j][0] && val[i][1] <= val[j][1] && val[i][2] <= val[j][2])
                Adj[j].push_back(i);
        }

    int match = 0;
    fill(&Left[1], &Left[MAX], -1), fill(&Right[1], &Right[MAX], -1);
    for(int r=0; r<2; r++)
        for(int i=1; i<=N; i++) {
            fill(&Visit[1], &Visit[MAX], false);
            if(DFS(i)) match++;
        }
    cout << N - match;
}
