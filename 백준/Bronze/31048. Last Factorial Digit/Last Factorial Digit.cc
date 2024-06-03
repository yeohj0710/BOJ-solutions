#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        int ans = 1;

        for(int i=1; i<=n; i++) ans = (ans * i) % 10;

        cout << ans << "\n";
    }
}
