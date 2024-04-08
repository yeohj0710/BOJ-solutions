#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    if(a >= b) {
        cout << 0 << "\n";
        return 0;
    }

    int ans = 1;

    for(int i=1; i<=a; i++) ans = (ans * i) % b;

    cout << ans << "\n";
}
