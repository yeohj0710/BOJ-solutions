#include <bits/stdc++.h>
using namespace std;
const int MAX = 1005;

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

    int N, M;
    cin >> N >> M;

    map<string, int> member;
    for(int i=1; i<=M; i++) {
        string name; cin >> name;
        member[name] = i;
    }
    for(int i=1; i<=N; i++) {
        int S; cin >> S;
        while(S--) {
            string name; cin >> name;
            Adj[i].push_back(member[name]);
        }
    }

    int match = 0;
    fill(Left, Left+MAX, -1), fill(Right, Right+MAX, -1);
    for(int i=1; i<=N; i++) {
        fill(Visit, Visit+MAX, false);
        if(DFS(i)) match++;
    }

    if(match == N) cout << "YES";
    else cout << "NO\n" << match;
}
