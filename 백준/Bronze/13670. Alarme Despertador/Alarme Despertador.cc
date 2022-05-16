#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        if(a == 0 && b == 0 && c == 0 && d == 0) break;

        int x = a * 60 + b, y = c * 60 + d;

        if(x <= y) cout << y - x << "\n";
        else cout << y + 1440 - x << "\n";
    }
}
