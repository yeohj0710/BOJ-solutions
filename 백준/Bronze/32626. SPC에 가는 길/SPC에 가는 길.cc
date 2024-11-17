#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;

    if((a == c && c == e && ((b <= f && f <= d) || (d <= f && f <= b))) || (b == d && d == f && ((a <= e && e <= c) || (c <= e && e <= a)))) cout << 2 << "\n";
    else if(a != c && b != d) cout << 1 << "\n";
    else cout << 0 << "\n";
}
