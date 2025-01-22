#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int ans = 0;

    for(int i=1; i<=n; i++) {
        if(i % 2 == 1) ans += 3;
        else ans -= 2;
    }

    cout << ans << "\n";
}
