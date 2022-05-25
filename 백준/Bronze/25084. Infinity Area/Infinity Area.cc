#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(6);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int r, a, b; cin >> r >> a >> b;

        double ans = M_PI*r*r;

        while(r > 0) {
            r *= a;
            ans += M_PI*r*r;

            r /= b;
            ans += M_PI*r*r;
        }

        cout << "Case #" << t << ": " << ans << "\n";
    }
}

