#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(4);

    int T; cin >> T;

    while(T--) {
        double a, b; cin >> a >> b;

        double x = a / b * 60;

        cout << x * (a - 1) / a << " " << x << " " << x * (a + 1) / a << "\n";
    }
}
