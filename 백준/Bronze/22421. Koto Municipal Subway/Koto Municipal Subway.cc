#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(3);

    while(true) {
        double a, b; cin >> a >> b;
        if(a == 0 && b == 0) break;

        double ans = INT_MAX;
        for(double i=0; i<=a; i++) {
            double j = a - i;
            ans = min(ans, abs(sqrt(i*i + j*j) - b));
        }

        cout << ans << "\n";
    }
}
