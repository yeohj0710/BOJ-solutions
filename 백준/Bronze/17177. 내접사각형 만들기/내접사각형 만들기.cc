#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<double> x(3);
    for(double i=0; i<3; i++) cin >> x[i];

    sort(x.begin(), x.end(), greater<double>());

    double a = sqrt(x[0]*x[0] - x[1]*x[1]);
    double b = sqrt(x[0]*x[0] - x[2]*x[2]);

    double ans = (a * b - x[1] * x[2]) / x[0];

    if(ans > 0) cout << ans << "\n";
    else cout << -1 << "\n";
}
