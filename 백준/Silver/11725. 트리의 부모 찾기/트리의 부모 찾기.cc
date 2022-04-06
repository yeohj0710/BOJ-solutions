#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> line[100005];
int visited[100005] = {0, }, parent[100005];

void DFS(int v) {
    visited[v] = 1;
    for(int i=0; i<line[v].size(); i++)
        if(!visited[line[v][i]]) {
            parent[line[v][i]] = v;
            DFS(line[v][i]);
        }
}

int main() {
    int N, a, b;
    cin >> N;
    for(int i=0; i<N-1; i++) {
        cin >> a >> b;
        line[a].push_back(b);
        line[b].push_back(a);
    }
    DFS(1);
    for(int i=2; i<=N; i++) cout << parent[i] << '\n';
}
