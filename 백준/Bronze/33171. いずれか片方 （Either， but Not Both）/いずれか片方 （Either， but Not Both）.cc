#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, a, b; cin >> n >> a >> b;

    int ans = 0;

    for(int i=1; i<=n; i++) {
        int cnt = 0;

        if(i % a == 0) cnt++;
        if(i % b == 0) cnt++;

        if(cnt == 1) ans++;
    }

    cout << ans << "\n";
}
