#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    int ans = 0;

    if(a % 2 == 0) a++, ans++;
    if(b % 2 == 1) b--, ans++;

    if(a > b) {
        cout << ans << "\n";
        return 0;
    }

    ans += (b - a + 1) / 2;

    cout << ans << "\n";
}
