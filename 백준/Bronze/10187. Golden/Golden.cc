#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        double a, b; cin >> a >> b;

        if((1 + sqrt(5)) / 2 * 0.99 <= a / b && a / b <= (1 + sqrt(5)) / 2 * 1.01) cout << "golden\n";
        else cout << "not\n";
    }
}
