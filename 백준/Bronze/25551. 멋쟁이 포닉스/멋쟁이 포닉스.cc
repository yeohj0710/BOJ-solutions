#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    int x = min({a, d, e});
    int y = min({b, c, f});

    if(abs(x - y) <= 1) cout << x + y << "\n";
    else cout << min(x, y) * 2 + 1 << "\n";
}
