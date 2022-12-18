#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    cout << fixed << setprecision(2);

    int T; cin >> T;

    while(T--) {
        double a, b; cin >> a >> b;

        cout << "The height of the triangle is " << (a * 2) / b << " units\n";
    }
}
