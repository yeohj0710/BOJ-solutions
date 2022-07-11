#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    if(a % 2 == 0) {
        int ans = 2;

        if(b > 0) ans += (b-1)/a + 1;

        cout << ans*10 << "\n";
    }
    else {
        int ans = 2;

        b -= 2;

        if(b > 0) {
            b -= (a-2);
            ans++;
        }
        else ans++;

        if(b > 0) {
            ans += (b-1)/a + 1;
        }

        cout << ans*10 << "\n";
    }
}
