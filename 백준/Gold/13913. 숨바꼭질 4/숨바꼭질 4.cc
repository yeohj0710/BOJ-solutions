#include <bits/stdc++.h>
#define MAX 100001
using namespace std;

int parent[MAX] = {};
bool visited[MAX] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    queue<pair<int, int>> Queue; // <coordinate, distance>
    Queue.push({N, 0});
    visited[N] = true;

    while(!Queue.empty()) {
        int curr = Queue.front().first;
        int dist = Queue.front().second;

        Queue.pop();

        if(curr == K) {
            cout << dist << "\n";

            vector<int> path;
            while(curr != N) {
                path.push_back(curr);
                curr = parent[curr];
            }

            cout << N << " ";
            for(int i=path.size()-1; i>=0; i--) cout << path[i] << " ";

            return 0;
        }

        if(curr+1 < MAX && !visited[curr+1]) {
            Queue.push({curr+1, dist+1});
            visited[curr+1] = true;
            parent[curr+1] = curr;
        }

        if(curr-1 >= 0 && !visited[curr-1]) {
            Queue.push({curr-1, dist+1});
            visited[curr-1] = true;
            parent[curr-1] = curr;
        }

        if(curr*2 < MAX && !visited[curr*2]) {
            Queue.push({curr*2, dist+1});
            visited[curr*2] = true;
            parent[curr*2] = curr;
        }
    }
}
