#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(2);

    while(true) {
        int a, b, s, m, n; cin >> a >> b >> s >> m >> n;
        if(a == 0 && b == 0 && s == 0 && m == 0 && n == 0) break;

        double x = a * (m + 1/2);
        double y = b * (n + 1/2);

        double ang = atan((double)y/x) * (180.0 / M_PI);
        double vel = sqrt(x*x + y*y) / s;

        cout << ang << " " << vel << "\n";
    }
}
