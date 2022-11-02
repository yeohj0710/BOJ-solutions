#include <bits/stdc++.h>
#define int long long
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(6);

    double a, b, c; cin >> a >> b >> c;

    double ans = 1.0 / (1.0 / a + 1.0 / b + 1.0 / c);

    cout << ans << "\n";
}
