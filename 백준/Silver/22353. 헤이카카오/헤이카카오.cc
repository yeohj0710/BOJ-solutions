#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double a, d, k; cin >> a >> d >> k;

    d /= 100, k /= 100;

    double p = 1;

    double ans = 0;
    bool check = false;

    for(int i=1; ; i++) {
        if(d >= 1) {
            d = 1;
            check = true;
        }

        ans += p * d * (a * i);

        if(check) break;

        p = p * (1 - d);
        d = d * (1 + k);
    }

    cout << fixed;
    cout.precision(6);

    cout << ans << "\n";
}
