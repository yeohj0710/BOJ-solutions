#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;

        bool b1 = false;

        if(a > d || (a == d && b > e) || (a == d && b == e && c > f)) b1 = true;

        bool b2 = false;

        if(a + b + c > d + e + f) b2 = true;

        cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << "\n";

        if(b1 && b2) cout << "both\n";
        else if(b1 && !b2) cout << "color\n";
        else if(!b1 && b2) cout << "count\n";
        else if(!b1 && !b2) cout << "none\n";

        cout << "\n";
    }
}
