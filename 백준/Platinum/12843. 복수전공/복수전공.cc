#include <bits/stdc++.h>
using namespace std;
const int MAX = 2005;

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

    int N, M; cin >> N >> M;
    vector<int> cList, sList;

    for(int i=0; i<N; i++) {
        int val; char c;
        cin >> val; cin.clear(); cin >> c;
        if(c == 'c') cList.push_back(val);
        else sList.push_back(val);
    }

    for(int i=0; i<M; i++) {
        int val1, val2; cin >> val1 >> val2;
        for(int i=0; i<cList.size(); i++)
            if(cList[i] == val1) Adj[val1].push_back(val2);
        for(int i=0; i<sList.size(); i++)
            if(sList[i] == val1) Adj[val2].push_back(val1);
    }

    int match = 0;
    fill(Left, Left+MAX, -1), fill(Right, Right+MAX, -1);
    for(int i=0; i<cList.size(); i++) {
        fill(Visit, Visit+MAX, false);
        if(DFS(cList[i])) match++;
    }

    cout << N - match;
}
