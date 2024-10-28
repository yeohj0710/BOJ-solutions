#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        int a, b, c; cin >> a >> b >> c;

        cout << a << " " << b << " " << c << "\n";

        int ans = 0;

        for(int i=1; i<a; i++)
            if(i % b == 0 || i % c == 0) ans++;

        cout << ans << "\n";
    }
}
