#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        int a, b, c, d; cin >> a >> b >> c >> d;

        if(c == d) {
            cout << "G\n";
            continue;
        }

        int x = abs(c - d);

        if(a >= x && b >= x) cout << "E\n";
        else if(a >= x && b < x) cout << "L\n";
        else if(a < x && b >= x) cout << "R\n";
    }
}
