#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        if(a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0) break;

        int ans = (b*c + c*d + d*b) * 2 - b*c;

        while(f--) {
            int x, y; cin >> x >> y;
            ans -= x * y;
        }

        ans *= a;

        ans = (ans - 1)/e + 1;

        cout << ans << "\n";
    }
}
