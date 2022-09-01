#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, x, y; cin >> a >> b >> x >> y;

    for(int i=0; i<1e5; i++) {
        if(x == y) {
            cout << x << "\n";
            return 0;
        }

        if(x < y) x += a;
        else if(x > y) y += b;
    }

    cout << -1 << "\n";
}
