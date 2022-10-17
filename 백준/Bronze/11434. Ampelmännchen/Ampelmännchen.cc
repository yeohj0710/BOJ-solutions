#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, x, y; cin >> N >> x >> y;

        int ans = 0;

        while(N--) {
            int a, b, c, d; cin >> a >> b >> c >> d;

            ans += max(a*x + c*y, b*x + d*y);
        }

        cout << "Data Set " << t << ":\n";
        cout << ans << "\n";
        cout << "\n";
    }
}
