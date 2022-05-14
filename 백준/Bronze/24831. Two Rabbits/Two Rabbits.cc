#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int x, y, a, b; cin >> x >> y >> a >> b;

        if((y - x) % (a + b) == 0) cout << (y - x) / (a + b) << "\n";
        else cout << "-1\n";
    }
}
