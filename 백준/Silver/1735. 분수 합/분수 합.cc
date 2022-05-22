#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c, d; cin >> a >> b >> c >> d;

    int gcd = __gcd(a*d + b*c, b*d);

    cout << (a*d + b*c)/gcd << " " << b*d/gcd << "\n";
}
