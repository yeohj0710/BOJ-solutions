#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double K, P, X; cin >> K >> P >> X;

    double ans = INT_MAX;

    for(int i=1; i<=10000; i++)
        ans = min(ans, X*i + (K/i)*P);

    cout << fixed;
    cout.precision(3);

    cout << ans << "\n";
}
