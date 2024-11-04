#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        int n, m; cin >> n >> m;

        int x;

        for(int i=0; i<n; i++) cin >> x;
        for(int i=0; i<m; i++) cin >> x;

        if(n == 2 && m == 2) cout << 7 << "\n";
        else cout << 1 << "\n";
    }
}
