#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<vector<int>> adj(N*N);
    vector<int> deg(N*N);

    for(int i=0; i<N; i++) {
        for(int j=0; j<N-1; j++) {
            char ch; cin >> ch;

            int a = 0, b = 0;

            if(ch == '<') a = i * N + j, b = i * N + j + 1;
            else a = i * N + j + 1, b = i * N + j;

            adj[a].push_back(b);

            deg[b]++;
        }
    }

    for(int i=0; i<N-1; i++) {
        for(int j=0; j<N; j++) {
            char ch; cin >> ch;

            int a = 0, b = 0;

            if(ch == '<') a = i * N + j, b = (i + 1) * N + j;
            else a = (i + 1) * N + j, b = i * N + j;

            adj[a].push_back(b);

            deg[b]++;
        }
    }

    queue<int> q;

    for(int i=0; i<N*N; i++)
        if(deg[i] == 0) q.push(i);

    vector<int> ord;

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        ord.push_back(x);

        for(int i=0; i<adj[x].size(); i++) {
            int y = adj[x][i];

            deg[y]--;

            if(deg[y] == 0) q.push(y);
        }
    }

    vector<vector<int>> v(N, vector<int>(N));

    for(int i=0; i<ord.size(); i++) {
        int x = ord[i] / N, y = ord[i] % N;

        v[x][y] = i + 1;
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) cout << v[i][j] << " ";
        cout << "\n";
    }
}
