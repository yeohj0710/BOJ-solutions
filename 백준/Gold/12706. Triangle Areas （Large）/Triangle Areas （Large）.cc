#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int tc; cin >> tc;

    for(int t=1; t<=tc; t++) {
        cout << "Case #" << t << ": ";

        int n, m, k; cin >> n >> m >> k;

        if(n * m < k) {
            cout << "IMPOSSIBLE\n";
            continue;
        }

        if(n * m == k) {
            cout << "0 0 " << n << " 0 " << n << " " << m << "\n";
            continue;
        }

        if(m > k) {
            cout << "0 0 1 0 1 " << k << "\n";
            continue;
        }

        int x = k / m, y = k % m;

        cout << "0 " << y << " " << x << " 0 " << x + 1 << " " << m << "\n";
    }
}
