#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c; cin >> a >> b >> c;

    if(a > b) swap(a, b);

    for(int i=1; i*i<=c; i++) {
        if(c % i != 0) continue;

        int d = c / i;

        if(a + d == b + i) {
            cout << a + d << "\n";
            return 0;
        }
    }

    cout << -1 << "\n";
}
