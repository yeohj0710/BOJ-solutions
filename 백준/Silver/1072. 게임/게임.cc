#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    int x = b * 100 / a;

    int l = 1, r = INT_MAX, ans = INT_MAX;

    while(l <= r) {
        int m = (l + r)/2;

        int y = (b + m) * 100 / (a + m);

        if(x != y) {
            ans = min(ans, m);
            r = m - 1;
        }
        else l = m + 1;
    }

    if(ans != INT_MAX) cout << ans << "\n";
    else cout << -1 << "\n";
}
