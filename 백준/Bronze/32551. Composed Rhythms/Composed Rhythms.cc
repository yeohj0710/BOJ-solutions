#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    bool chk = false;

    if(n % 2 == 1) {
        chk = true;
        n -= 3;
    }

    int ans = n / 2;

    if(chk) ans++;

    cout << ans << "\n";

    for(int i=0; i<n/2; i++) cout << 2 << " ";

    if(chk) cout << 3 << " ";
    cout << "\n";
}
