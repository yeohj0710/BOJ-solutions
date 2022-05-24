#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double N, K, d, s; cin >> N >> K >> d >> s;

    double ans = (N*d - K*s)/(N - K);

    cout << fixed;
    cout.precision(6);

    if(ans < 0 || ans > 100) cout << "impossible\n";
    else cout << ans << "\n";
}
