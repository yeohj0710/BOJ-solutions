#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<int> l, r;
vector<bool> vis;

bool f(int x) {
    vis[x] = true;

    for(int i=0; i<adj[x].size(); i++) {
        int y = adj[x][i];

        if(r[y] == -1 || (!vis[r[y]] && f(r[y]))) {
            l[x] = y, r[y] = x;

            return true;
        }
    }

    return false;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    adj.resize(N+1);

    for(int i=1; i<=N; i++) {
        int K; cin >> K;

        while(K--) {
            int x; cin >> x;

            adj[i].push_back(x);
        }
    }

    l.resize(N+1, -1);
    r.resize(M+1, -1);

    int match = 0;

    for(int i=1; i<=N; i++) {
        vis.clear();
        vis.resize(N+1);

        f(i);
    }

    vector<bool> lvis(N+1), rvis(M+1);

    for(int i=1; i<=N; i++) {
        if(l[i] != -1 || lvis[i]) continue;

        lvis[i] = true;

        queue<pair<bool, int>> q;
        q.push({true, i});

        while(!q.empty()) {
            bool isLeft = q.front().first;
            int x = q.front().second;
            q.pop();

            if(isLeft) {
                for(int j=0; j<adj[x].size(); j++) {
                    int y = adj[x][j];

                    if(l[x] != y && !rvis[y]) {
                        rvis[y] = true;
                        q.push({false, y});
                    }
                }
            }
            else {
                for(int j=1; j<=N; j++) {
                    int y = j;

                    if(lvis[y]) continue;
                    if(count(adj[y].begin(), adj[y].end(), x) == 0) continue;

                    for(int k=0; k<adj[y].size(); k++) {
                        if(adj[y][k] != x) continue;

                        if(r[x] == y) {
                            lvis[y] = true;
                            q.push({true, y});
                        }
                    }
                }
            }
        }
    }

    vector<int> v, u;

    for(int i=1; i<=N; i++)
        if(!lvis[i]) v.push_back(i);

    for(int i=1; i<=M; i++)
        if(rvis[i]) u.push_back(i);

    cout << v.size() + u.size() << "\n";

    cout << v.size() << " ";

    for(int i=0; i<v.size(); i++) cout << v[i] << " ";
    cout << "\n";

    cout << u.size() << " ";

    for(int i=0; i<u.size(); i++) cout << u[i] << " ";
    cout << "\n";
}
