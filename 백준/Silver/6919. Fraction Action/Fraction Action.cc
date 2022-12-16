#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int a, b; cin >> a >> b;

    int gcd = __gcd(a, b);

    a /= gcd;
    b /= gcd;

    if(a / b > 0 && a % b > 0) cout << a / b << " " << a % b << "/" << b << "\n";
    else if(a / b == 0 && a % b > 0) cout << a % b << "/" << b << "\n";
    else if(a / b > 0 && a % b == 0) cout << a / b << "\n";
    else cout << 0 << "\n";
}
