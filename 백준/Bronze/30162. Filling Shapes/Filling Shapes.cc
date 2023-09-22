#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    if(n % 2 == 1) {
        cout << 0 << "\n";
        return 0;
    }

    int ans = 1;

    for(int i=0; i<n/2; i++) ans *= 2;

    cout << ans << "\n";
}
