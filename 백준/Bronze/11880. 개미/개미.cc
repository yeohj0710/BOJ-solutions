#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        int a, b, c; cin >> a >> b >> c;

        cout << min({(a+b)*(a+b) + c*c, (b+c)*(b+c) + a*a, (c+a)*(c+a) + b*b}) << "\n";
    }
}
