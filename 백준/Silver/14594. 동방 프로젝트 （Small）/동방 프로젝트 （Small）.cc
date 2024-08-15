#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<bool> v(n+1);

    while(m--) {
        int a, b; cin >> a >> b;

        for(int i=a; i<b; i++) v[i] = true;
    }

    int ans = n;

    for(int i=1; i<n; i++)
        if(v[i]) ans--;

    cout << ans << "\n";
}
