#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        int x; cin >> x;

        if(pow(round(sqrt(x)), 2) == x) cout << 1 << "\n";
        else cout << 0 << "\n";
    }
}
