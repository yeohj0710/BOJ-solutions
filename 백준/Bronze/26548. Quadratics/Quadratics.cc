#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    cout << fixed << setprecision(3);

    int T; cin >> T;

    while(T--) {
        double a, b, c; cin >> a >> b >> c;

        cout << (-b + sqrt(b*b - 4*a*c)) / (a*2) << ", " << (-b - sqrt(b*b - 4*a*c)) / (a*2) << "\n";
    }
}
