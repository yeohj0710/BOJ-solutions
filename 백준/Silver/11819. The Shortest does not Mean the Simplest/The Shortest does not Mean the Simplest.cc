#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a_, b_, c_; cin >> a_ >> b_ >> c_;

    __int128 a = a_, b = b_, c = c_, ans = 1;

    a %= c;

    while(b > 0) {
        if(b % 2 == 1) ans = (ans * a) % c;

        a = (a * a) % c;
        b /= 2;
    }

    int ans_ = ans;

    cout << ans_ << "\n";
}
