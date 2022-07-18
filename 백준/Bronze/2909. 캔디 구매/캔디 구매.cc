#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double a, b; cin >> a >> b;

    a /= pow(10, b);

    int ans = round(a) * pow(10, b);

    cout << ans << "\n";
}
