#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<bool> v(n+1);
    int ans = n;

    while(m--) {
        int a; cin >> a;

        if(a == 1) {
            int b; cin >> b;

            if(!v[b]) ans--;

            v[b] = true;
        }
        else if(a == 2) {
            int b; cin >> b;

            if(v[b]) ans++;

            v[b] = false;
        }
        else if(a == 3) cout << ans << "\n";
    }
}
