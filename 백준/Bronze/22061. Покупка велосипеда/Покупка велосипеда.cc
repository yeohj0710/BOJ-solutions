#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int a, b, c; cin >> a >> b >> c;

        c -= min(b * 2, (c / 2) * 2);
        c -= min(a, c);

        if(c == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}
