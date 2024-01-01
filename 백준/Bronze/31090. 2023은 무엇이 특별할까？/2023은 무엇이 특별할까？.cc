#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int x; cin >> x;

        if((x + 1) % (x % 100) == 0) cout << "Good\n";
        else cout << "Bye\n";
    }
}
