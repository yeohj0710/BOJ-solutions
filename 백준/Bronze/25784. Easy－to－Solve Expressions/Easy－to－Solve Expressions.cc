#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;

    if(a + b == c || b + c == a || c + a == b) cout << 1 << "\n";
    else if(a * b == c || b * c == a || c * a == b) cout << 2 << "\n";
    else cout << 3 << "\n";
}
