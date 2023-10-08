#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int ans = 0;

    for(int i=0; i<10; i++) {
        int x; cin >> x;

        ans += x;
    }

    ans /= 2;

    cout << ans << "\n";
}
