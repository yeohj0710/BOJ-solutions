#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    double ans = 0;

    while(n--) {
        double x; cin >> x;

        ans += (x + 1) / 2;
    }

    cout << fixed << setprecision(6);
    cout << ans << "\n";
}
