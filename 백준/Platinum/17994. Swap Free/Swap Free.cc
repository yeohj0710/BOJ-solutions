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

    int N; cin >> N;

    vector<string> v(N);

    for(int i=0; i<N; i++) cin >> v[i];

    vector<string> u, w;

    u.push_back(v[0]);

    int len = v[0].length();

    for(int i=1; i<N; i++) {
        string tmp = v[i];
        int cnt = 0;

        for(int j=0; j<len; j++)
            if(tmp[j] != v[0][j]) {
                for(int k=j+1; k<len; k++)
                    if(tmp[k] == v[0][j]) {
                        swap(tmp[j], tmp[k]);
                        cnt++;
                        break;
                    }
            }

        if(cnt % 2 == 0) u.push_back(v[i]);
        else if(cnt % 2 == 1) w.push_back(v[i]);
    }

    adj.resize(u.size());

    for(int i=0; i<u.size(); i++)
        for(int j=0; j<w.size(); j++) {
            int cnt = 0;

            for(int k=0; k<len; k++)
                if(u[i][k] != w[j][k]) cnt++;

            if(cnt == 2) adj[i].push_back(j);
        }

    l.resize(u.size(), -1);
    r.resize(w.size(), -1);

    int match = 0;

    for(int i=0; i<u.size(); i++) {
        vis.clear();
        vis.resize(u.size());

        if(f(i)) match++;
    }

    int ans = N - match;

    cout << ans << "\n";
}
