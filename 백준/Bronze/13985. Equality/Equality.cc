#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double a, b, c;
    char c1, c2;
    cin >> a >> c1 >> b >> c2 >> c;

    bool ans = false;

    if(c1 == '+' && a + b == c) ans = true;
    else if(c1 == '-' && a - b == c) ans = true;
    else if(c1 == '*' && a * b == c) ans = true;
    else if(c1 == '/' && a / b == c) ans = true;

    if(ans) cout << "YES\n";
    else cout << "NO\n";
}
