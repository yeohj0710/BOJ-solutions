#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    double x, ans = 0;

    while(cin >> x) {
        ans += x * 100;
    }

    ans /= 100;

    cout << fixed << setprecision(2);
    cout << ans << "\n";
}
