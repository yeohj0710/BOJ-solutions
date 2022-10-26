#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;

    int ans = 0;

    if(a - 2*c < 0 || b - 2*c < 0) ans = 0;
    else ans = (a - 2*c) * (b - 2*c);

    cout << ans << "\n";
}
