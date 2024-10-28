#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<char> u(n);

    for(int i=0; i<n; i++) u[i] = char('A' + i);

    struct st { int a; char b, c; };
    vector<st> v(m);

    for(int i=0; i<m; i++)
        cin >> v[i].a >> v[i].b >> v[i].c;

    int ans = 0;
    vector<int> w(26);

    while(true) {
        for(int i=0; i<u.size(); i++) w[u[i] - 'A'] = i;

        bool chk = true;

        for(int i=0; i<m; i++) {
            if(v[i].a == 1 && w[v[i].b - 'A'] > w[v[i].c - 'A']) chk = false;
            else if(v[i].a == 2 && w[v[i].b - 'A'] < w[v[i].c - 'A']) chk = false;
            else if(v[i].a == 3 && abs(w[v[i].b - 'A'] - w[v[i].c - 'A']) == 1) chk = false;

            if(!chk) break;
        }

        if(chk) ans++;

        if(!next_permutation(u.begin(), u.end())) break;
    }

    cout << ans << "\n";
}
