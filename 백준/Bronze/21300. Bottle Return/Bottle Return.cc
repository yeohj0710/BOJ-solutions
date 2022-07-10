#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int ans = 0;

    for(int i=0; i<6; i++) {
        int x; cin >> x;

        ans += x;
    }

    ans *= 5;

    cout << ans << "\n";
}
