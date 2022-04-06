#include <iostream>
#include <vector>
using namespace std;

int max_cost = 0, deep_node = 1;
vector<pair<int, int>> node[100005];

void DFS(int cur, int prev, int cost) {
    if(cost > max_cost) {
        max_cost = cost;
        deep_node = cur;
    }
    for(int i=0; i<node[cur].size(); i++)
        if(node[cur][i].first != prev) DFS(node[cur][i].first, cur, cost+node[cur][i].second);
}

int main() {
    int V, a, b, c;
    cin >> V;
    for(int i=0; i<V; i++) {
        cin >> a;
        while(1) {
            cin >> b;
            if(b == -1) break;
            cin >> c;
            node[a].push_back(make_pair(b, c));
        }
    }
    DFS(1, 0, 0);
    max_cost = 0;
    DFS(deep_node, 0, 0);
    cout << max_cost;
}
