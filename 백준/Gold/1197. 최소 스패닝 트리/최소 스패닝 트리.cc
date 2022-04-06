#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int parent[10001], sum = 0;
vector<pair<pair<int, int>, int>> line;
bool compare(const pair<pair<int, int>, int>& a, const pair<pair<int, int>, int>& b) { return a.second < b.second; }

int find_parent(int node) {
    if(parent[node] == node) return node;
    else return parent[node] = find_parent(parent[node]);
}

int main() {
    int V, E, A, B, C;
    scanf("%d %d", &V, &E);
    for(int i=0; i<E; i++) {
        scanf("%d %d %d", &A, &B, &C);
        line.push_back({{A, B}, C});
    }
    sort(line.begin(), line.end(), compare);
    for(int i=1; i<=V; i++) parent[i] = i;
    for(int i=0; i<E; i++) {
        if(find_parent(line[i].first.first) != find_parent(line[i].first.second)) {
            parent[find_parent(line[i].first.first)] = find_parent(line[i].first.second);
            sum += line[i].second;
        }
    }
    printf("%d", sum);
}
