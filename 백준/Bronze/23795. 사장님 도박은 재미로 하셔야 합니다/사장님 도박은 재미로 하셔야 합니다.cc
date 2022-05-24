#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int ans = 0;

    while(true) {
        int x; cin >> x;
        if(x == -1) break;

        ans += x;
    }

    cout << ans << "\n";
}
