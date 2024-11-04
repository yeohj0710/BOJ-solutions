#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    double d1, d2; cin >> d1 >> d2;

    double t1 = 0, t2 = 0, v1 = 0, v2 = 0, c1 = 0, c2 = 0;

    for(int i=0; i<20; i++) {
        char ch; double x; cin >> ch >> x;

        if(ch == 'a' || ch == 'A') {
            t1 += x;
            v1 += d1 / x;
            c1++;
        }
        else {
            t2 += x;
            v2 += d2 / x;
            c2++;
        }
    }

    cout << fixed << setprecision(2);

    cout << "Method 1\n";
    cout << "African: " << d1 * 10 / t1 << " furlongs per hour\n";
    cout << "European: " << d2 * 10 / t2 << " furlongs per hour\n";

    cout << "Method 2\n";
    cout << "African: " << v1 / c1 << " furlongs per hour\n";
    cout << "European: " << v2 / c2 << " furlongs per hour\n";
}
