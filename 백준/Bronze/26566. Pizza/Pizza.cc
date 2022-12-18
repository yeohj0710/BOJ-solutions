#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        double a, b, c, d; cin >> a >> b >> c >> d;

        int x = b / a;
        int y = d / (M_PI * c * c);

        if(x < y) cout << "Slice of pizza\n";
        else cout << "Whole pizza\n";
    }
}
