#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; char c; cin >> a >> c >> b;

    cout << a/__gcd(a, b) << ":" << b/__gcd(a, b) << "\n";
}
