#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    cout << fixed << setprecision(5);

    int T; cin >> T;

    while(T--) {
        double r; cin >> r;

        cout << 2 * pow(1 + sqrt(2) + sqrt(3), 2) * r * r << "\n";
    }
}
