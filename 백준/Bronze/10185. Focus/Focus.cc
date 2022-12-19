#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    cout << fixed << setprecision(1);

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        cout << "f = " << 1.0 / (1.0 / a + 1.0 / b) << "\n";
    }
}
