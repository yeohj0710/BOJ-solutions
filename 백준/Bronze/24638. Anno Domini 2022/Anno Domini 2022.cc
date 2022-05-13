#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b, c, d; cin >> a >> b >> c >> d;

    string p, q;
    int x, y;

    if(a == "BC" || a == "AD") p = a, x = stoi(b);
    else p = b, x = stoi(a);

    if(c == "BC" || c == "AD") q = c, y = stoi(d);
    else q = d, y = stoi(c);

    if(p == q) cout << abs(x - y) << "\n";
    else cout << x + y - 1 << "\n";
}
