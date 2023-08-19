#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;

    int f = a * b / __gcd(a, b);

    int g = c * f / __gcd(c, f);

    int ans = 0;

    if(e == 1) ans++;

    ans += (d * e - 1) / g - (d * (e - 1) - 1) / g;

    cout << ans << "\n";
}
