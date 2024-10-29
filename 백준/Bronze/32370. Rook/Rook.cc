#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c, d; cin >> a >> b >> c >> d;

    int ans;

    if(a == 0) {
        if(c == 0) {
            if(d < b) ans = 3;
            else ans = 1;
        }
        else ans = 1;
    }
    else if(b == 0) {
        if(d == 0) {
            if(c < a) ans = 3;
            else ans = 1;
        }
        else ans = 1;
    }
    else ans = 2;

    cout << ans << "\n";
}
