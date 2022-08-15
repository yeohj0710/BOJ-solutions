#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int x, y, a, b; cin >> x >> y >> a >> b;

    int ans = min({x, y, a-x, b-y});

    cout << ans << "\n";
}
