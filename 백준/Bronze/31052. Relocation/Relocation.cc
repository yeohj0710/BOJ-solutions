#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<int> v(n+1);
    for(int i=1; i<=n; i++) cin >> v[i];

    while(m--) {
        int a, b, c; cin >> a >> b >> c;

        if(a == 1) v[b] = c;
        else if(a == 2) cout << abs(v[b] - v[c]) << "\n";
    }
}
