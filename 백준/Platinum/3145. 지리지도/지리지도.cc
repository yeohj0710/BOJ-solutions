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

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int R, C; cin >> R >> C;

    vector<vector<char>> v(R+1, vector<char>(C+1));
    for(int i=1; i<=R; i++)
        for(int j=1; j<=C; j++) cin >> v[i][j];

    int cnt1 = 0;
    unordered_map<int, string> m2;
    vector<vector<int>> u(R+1, vector<int>(C+1));

    for(int i=1; i<=R; i++)
        for(int j=1; j<=C; j++)
            if(v[i][j] >= 'A' && v[i][j] <= 'Z' && u[i][j] == 0) {
                cnt1++;
                string str = "";

                while(v[i][j] >= 'A' && v[i][j] <= 'Z' && j <= C) {
                    u[i][j] = cnt1;
                    str += v[i][j];
                    j++;
                }

                m2[cnt1] = str;
            }

    int cnt2 = 0;
    unordered_map<int, pair<int, int>> m;
    vector<vector<int>> w(R+1, vector<int>(C+1));

    for(int i=1; i<=R; i++)
        for(int j=1; j<=C; j++)
            if(v[i][j] == 'x') {
                m[++cnt2] = {i, j};
                w[i][j] = cnt2;
            }

    adj.resize(cnt2+1);

    for(int i=1; i<=R; i++)
        for(int j=1; j<=C; j++)
            if(v[i][j] == 'x') {
                vector<int> di = {-1, -1, -1, 0, 1, 1, 1, 0};
                vector<int> dj = {-1, 0, 1, 1, 1, 0, -1, -1};

                for(int k=0; k<8; k++) {
                    int ni = i + di[k];
                    int nj = j + dj[k];

                    if(ni < 1 || nj < 1 || ni > R || nj > C) continue;
                    if(u[ni][nj] == 0) continue;

                    adj[w[i][j]].push_back(u[ni][nj]);
                }
            }

    for(int i=1; i<=cnt2; i++) {
        sort(adj[i].begin(), adj[i].end());
        adj[i].erase(unique(adj[i].begin(), adj[i].end()), adj[i].end());
    }

    l.resize(cnt2+1, -1);
    r.resize(cnt1+1, -1);

    int ans = 0;

    for(int i=1; i<=cnt2; i++) {
        vis.clear();
        vis.resize(cnt2+1);

        if(f(i)) ans++;
    }

    for(int i=1; i<=cnt2; i++)
        cout << m[i].first << " " << m[i].second << " " << m2[l[i]] << "\n";
}
