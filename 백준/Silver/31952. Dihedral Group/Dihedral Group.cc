#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<int> v(n), u(m);
    for(int i=0; i<n; i++) cin >> v[i];
    for(int i=0; i<m; i++) cin >> u[i];

    int idx = -1;

    for(int i=0; i<n; i++)
        if(v[i] == u[0]) idx = i;

    bool chk = true;
    int cur = idx;

    for(int i=0; i<m; i++)
        if(v[(cur + i) % n] != u[i]) chk = false;

    if(chk) {
        cout << 1 << "\n";
        return 0;
    }

    chk = true;
    cur = idx;

    for(int i=0; i<m; i++)
        if(v[(cur - i + n) % n] != u[i]) chk = false;

    if(chk) cout << 1 << "\n";
    else cout << 0 << "\n";
}
