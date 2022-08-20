#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
        if(a*a + b*b + c*c + d*d + e*e + f*f == 0) break;

        if(a < b) swap(a, b);
        if(c < d) swap(c, d);
        if(e < f) swap(e, f);

        int ans = a*b + c*d + e*f;

        ans -= min(a, c) * min(b, d);
        ans -= min(c, e) * min(d, f);
        ans -= min(e, a) * min(f, b);

        ans += min({a, c, e}) * min({b, d, f});

        cout << ans << "\n";
    }
}
