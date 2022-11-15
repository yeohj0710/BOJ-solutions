#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(6);

    int N; cin >> N;

    double ans = 0;

    while(N--) {
        double x; cin >> x;

        ans += pow(x, 3);
    }

    ans = pow(ans, 1.0/3.0);

    cout << ans << "\n";
}
