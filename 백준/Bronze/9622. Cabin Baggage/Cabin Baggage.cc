#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    int ans = 0;

    while(T--) {
        double a, b, c, d; cin >> a >> b >> c >> d;

        if(((a <= 56 && b <= 45 && c <= 25) || (a+b+c) <= 125) && d <= 7) {
            cout << 1 << "\n";
            ans++;
        }
        else cout << 0 << "\n";
    }

    cout << ans << "\n";
}
