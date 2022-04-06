#include <bits/stdc++.h>
#define MAX 101
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, sour, sink;
    cin >> N >> sour >> sink >> M;

    vector<int> edge[MAX];
    while(M--) {
        int x, y; cin >> x >> y;

        edge[x].push_back(y);
        edge[y].push_back(x);
    }

    bool Visit[MAX] = {};
    Visit[sour] = true;

    int dist[MAX] = {};
    dist[sour] = 0;

    queue<int> Queue;
    Queue.push(sour);

    while(!Queue.empty()) {
        int curr = Queue.front();
        Queue.pop();

        for(int i=0; i<edge[curr].size(); i++) {
            int next = edge[curr][i];

            if(Visit[next]) continue;

            Visit[next] = true;
            dist[next] = dist[curr] + 1;

            Queue.push(next);
        }
    }

    if(dist[sink] != 0) cout << dist[sink];
    else cout << "-1";
}
