#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int k; cin >> k;

    int a, b, c, d; cin >> a >> b >> c >> d;

    if(a*k + b == c*k + d) cout << "Yes " << a*k + b << "\n";
    else cout << "No\n";
}
