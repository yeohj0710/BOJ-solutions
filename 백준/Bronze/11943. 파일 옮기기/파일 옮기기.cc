#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if(a + d < b + c) cout << a + d << "\n";
    else cout << b + c << "\n";
}
