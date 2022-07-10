#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double a, b; cin >> a >> b;

    if(a - a*(b/100) >= 100) cout << 0 << "\n";
    else cout << 1 << "\n";
}
