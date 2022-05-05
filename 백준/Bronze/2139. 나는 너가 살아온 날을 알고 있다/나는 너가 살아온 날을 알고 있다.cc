#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int a, b, c; cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) break;

        int ans = a;

        if(b > 1) ans += 31;
        if(b > 2) {
            if(c % 4 == 0 && (c % 100 != 0 || c % 400 == 0)) ans += 29;
            else ans += 28;
        }
        if(b > 3) ans += 31;
        if(b > 4) ans += 30;
        if(b > 5) ans += 31;
        if(b > 6) ans += 30;
        if(b > 7) ans += 31;
        if(b > 8) ans += 31;
        if(b > 9) ans += 30;
        if(b > 10) ans += 31;
        if(b > 11) ans += 30;

        cout << ans << "\n";
    }
}
