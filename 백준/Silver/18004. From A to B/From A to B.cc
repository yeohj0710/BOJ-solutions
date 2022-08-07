#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    if(a == b) {
        cout << 0 << "\n";
        return 0;
    }

    int ans = 0;

    if(a > b) {
        while(a > b) {
            if(a % 2 == 0) a /= 2;
            else a++;

            ans++;
        }
    }

    if(a < b) ans += b - a;

    cout << ans << "\n";
}
