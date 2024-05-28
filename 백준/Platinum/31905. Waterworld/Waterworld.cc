#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    double ans = 0;

    for(int i=0; i<n*m; i++) {
        double x; cin >> x;

        ans += x / (n * m);
    }

    cout << fixed << setprecision(6);
    cout << ans << "\n";
}
