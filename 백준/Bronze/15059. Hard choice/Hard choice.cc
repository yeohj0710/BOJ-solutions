#include <bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a1, b1, c1, a2, b2, c2;

    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    int ans = max(a2 - a1, 0) + max(b2 - b1, 0) + max(c2 - c1, 0);

    cout << ans << "\n";
}
