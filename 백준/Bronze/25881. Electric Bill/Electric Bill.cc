#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    int T; cin >> T;

    while(T--) {
        int x; cin >> x;

        cout << x << " ";

        if(x <= 1000) cout << x * a << "\n";
        else cout << 1000 * a + (x - 1000) * b << "\n";
    }
}
