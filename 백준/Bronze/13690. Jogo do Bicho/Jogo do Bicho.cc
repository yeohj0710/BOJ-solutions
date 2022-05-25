#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(2);

    while(true) {
        double x; int a, b; cin >> x >> a >> b;
        if(x == 0 && a == 0 && b == 0) break;

        double ans = 0;

        if(a % 10000 == b % 10000) ans = x * 3000;
        else if(a % 1000 == b % 1000) ans = x * 500;
        else if(a % 100 == b % 100) ans = x * 50;
        else if(((a % 100)-1+100)/4 == ((b % 100)-1+100)/4) ans = x * 16;

        cout << ans << "\n";
    }
}
