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

    adj.resize(N);

    vector<pair<int, int>> v(N);
    map<int, int> m, rm;
    int cnt = 0;

    for(int i=0; i<N; i++) {
        int a, b; cin >> a >> b;

        v[i].first = a, v[i].second = b;

        if(m[a+b] == 0) m[a+b] = ++cnt;
        rm[m[a+b]] = a + b;
        adj[i].push_back(m[a+b]);

        if(m[a-b] == 0) m[a-b] = ++cnt;
        rm[m[a-b]] = a - b;
        adj[i].push_back(m[a-b]);

        if(m[a*b] == 0) m[a*b] = ++cnt;
        rm[m[a*b]] = a * b;
        adj[i].push_back(m[a*b]);
    }

    l.resize(N, -1);
    r.resize(cnt+1, -1);

    int match = 0;

    for(int i=0; i<N; i++) {
        vis.clear();
        vis.resize(N);

        if(f(i)) match++;
    }

    if(match != N) {
        cout << "impossible\n";
        return 0;
    }

    for(int i=0; i<N; i++) {
        int a = v[i].first, b = v[i].second;

        char ch;

        if(rm[l[i]] == a + b) ch = '+';
        else if(rm[l[i]] == a - b) ch = '-';
        else if(rm[l[i]] == a * b) ch = '*';

        cout << a << " " << ch << " " << b << " = " << rm[l[i]] << "\n";
    }
}
