#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int a, b, c; cin >> a >> b >> c;

        cout << c / __gcd(a, b) << "\n";
    }
}
