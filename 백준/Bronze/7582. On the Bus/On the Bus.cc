#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        string s; int n; cin >> s >> n;

        if(s == "#" && n == 0) break;

        int ans; cin >> ans;
        int m; cin >> m;

        while(m--) {
            int a, b; cin >> a >> b;

            ans += b - a;

            ans = min(ans, n);
        }

        cout << s << " " << ans << "\n";
    }
}
