#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(6);

    double a, b, c; cin >> a >> b >> c;

    int d = ((int)c - 1) / 5 + 1;

    if(b < d) {
        cout << 1 << "\n";
        return 0;
    }

    double x = 1;

    for(int i=0; i<d; i++) {
        x *= (b - i) / (a - i);
    }

    cout << 1 - x << "\n";
}
