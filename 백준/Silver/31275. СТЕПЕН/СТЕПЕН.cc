#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    int ans = 0;

    for(int i=0; i<n; i++) {
        int x; cin >> x;

        int res = 1, ba = x, ex = i+2;

        while(ex > 0) {
            if(ex % 2 == 1) res = (res * ba) % m;

            ba = (ba * ba) % m;
            ex /= 2;
        }

        ans = (ans + res) % m;
    }

    cout << ans << "\n";
}
