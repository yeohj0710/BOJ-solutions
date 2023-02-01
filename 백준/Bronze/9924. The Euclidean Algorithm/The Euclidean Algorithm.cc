#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    int ans = 0;

    while(a != b) {
        int x = max(a, b) - min(a, b);
        int y = min(a, b);

        a = x, b = y;
        ans++;
    }

    cout << ans << "\n";
}
