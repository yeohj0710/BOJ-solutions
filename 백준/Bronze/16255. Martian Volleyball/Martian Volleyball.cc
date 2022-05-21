#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int k, x, y; cin >> k >> x >> y;

        if(x < y) swap(x, y);

        if(x < k) {
            if(k - y >= 2) cout << k - x << "\n";
            else cout << 2 << "\n";
        }
        else {
            if(x >= y + 2) cout << 0 << "\n";
            else cout << y + 2 - x << "\n";
        }
    }
}
