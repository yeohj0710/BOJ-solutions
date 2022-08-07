#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c, d; cin >> a >> b >> c >> d;

    int ans = d;

    int x = min(a, c);

    ans += x;

    a -= x;
    c -= x;

    ans += c;

    x = b/2;

    ans += x;

    b -= (b/2) * 2;

    x = min(a/2, b);

    ans += x;

    a -= x*2;
    b -= x;

    x = min(a, b);

    ans += x;

    a -= x;
    b -= x;

    ans += b;

    if(a > 0) ans += (a - 1)/4 + 1;

    cout << ans << "\n";
}
