#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a = 0, b = 0;

    while(true) {
        int q; cin >> q;

        if(q == 1) {
            char c; int x; cin >> c >> x;

            if(c == 'A') a = x;
            else b = x;
        }
        else if(q == 2) {
            char c; cin >> c;

            if(c == 'A') cout << a << "\n";
            else cout << b << "\n";
        }
        else if(q == 3) {
            char c, d; cin >> c >> d;

            if(c == 'A' && d == 'A') a += a;
            else if(c == 'A' && d == 'B') a += b;
            else if(c == 'B' && d == 'A') b += a;
            else if(c == 'B' && d == 'B') b += b;
        }
        else if(q == 4) {
            char c, d; cin >> c >> d;

            if(c == 'A' && d == 'A') a *= a;
            else if(c == 'A' && d == 'B') a *= b;
            else if(c == 'B' && d == 'A') b *= a;
            else if(c == 'B' && d == 'B') b *= b;
        }
        else if(q == 5) {
            char c, d; cin >> c >> d;

            if(c == 'A' && d == 'A') a -= a;
            else if(c == 'A' && d == 'B') a -= b;
            else if(c == 'B' && d == 'A') b -= a;
            else if(c == 'B' && d == 'B') b -= b;
        }
        else if(q == 6) {
            char c, d; cin >> c >> d;

            if(c == 'A' && d == 'A') a /= a;
            else if(c == 'A' && d == 'B') a /= b;
            else if(c == 'B' && d == 'A') b /= a;
            else if(c == 'B' && d == 'B') b /= b;
        }
        else if(q == 7) break;
    }
}
