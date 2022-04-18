#include <bits/stdc++.h>
using namespace std;

const int MAX = 1001;
typedef pair<int, pair<int, int>> triple;

int parent[MAX];
priority_queue<triple, vector<triple>, greater<triple>> adj; // triple : <cost, <sour, dest>>

int root(int v) {
    if(parent[v] == v) return v;
    return parent[v] = root(parent[v]);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    for(int i=1; i<=N; i++) parent[i] = i;

    for(int i=0; i<M; i++) {
        int sour, dest, cost; cin >> sour >> dest >> cost;

        adj.push({cost, {sour, dest}});
    }

    int sum = 0;
    while(!adj.empty()) {
        int u = adj.top().second.first;
        int v = adj.top().second.second;
        int cost = adj.top().first;

        adj.pop();

        u = root(u);
        v = root(v);

        if(u != v) {
            parent[u] = v;
            sum += cost;
        }
    }

    cout << sum << "\n";
}
