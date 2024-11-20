#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, a, b, c; cin >> n >> a >> b >> c;

    int x = 0, ans = 0;

    n--;

    while(n--) {
        if(x == 0) {
            if(a < b) {
                x = 1;
                ans += a;
            }
            else {
                x = 2;
                ans += b;
            }
        }
        else if(x == 1) {
            if(a < c) {
                x = 0;
                ans += a;
            }
            else {
                x = 2;
                ans += c;
            }
        }
        else {
            if(b < c) {
                x = 0;
                ans += b;
            }
            else {
                x = 1;
                ans += c;
            }
        }
    }

    cout << ans / 100 << " " << ans % 100 << "\n";
}
