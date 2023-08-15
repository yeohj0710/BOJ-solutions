#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    if(a > b * 9) {
        cout << -1 << "\n";
        return 0;
    }

    while(b--) {
        int x = min(a, (int)9);

        cout << x;

        a -= x;
    }
    cout << "\n";
}
