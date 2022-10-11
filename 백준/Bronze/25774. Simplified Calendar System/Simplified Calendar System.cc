#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int d1, m1, y1, k; cin >> d1 >> m1 >> y1 >> k;
    int d2, m2, y2; cin >> d2 >> m2 >> y2;

    int sum = d2 - d1 + (m2 - m1) * 30 + (y2 - y1) * 30 * 12;

    int ans = k + (sum % 7);

    if(ans > 7) ans -= 7;

    cout << ans << "\n";
}
