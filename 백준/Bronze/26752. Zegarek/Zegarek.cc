#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int a, b, c; cin >> a >> b >> c;

    int sum = (a*60*60 + b*60 + c + 1) % (24*60*60);

    a = sum / (60*60);
    b = (sum % (60*60)) / 60;
    c = sum % 60;

    string x = to_string(a), y = to_string(b), z = to_string(c);

    while(x.length() < 2) x = '0' + x;
    while(y.length() < 2) y = '0' + y;
    while(z.length() < 2) z = '0' + z;

    cout << x << ":" << y << ":" << z << "\n";
}
