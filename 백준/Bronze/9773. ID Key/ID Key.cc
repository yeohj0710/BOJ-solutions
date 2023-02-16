#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int x; cin >> x;

        int ans = 0, tmp = x;

        while(tmp > 0) {
            ans += tmp % 10;
            tmp /= 10;
        }

        ans += (x % 1000) * 10;

        if(ans < 1000) ans += 1000;

        ans %= 10000;

        string str = to_string(ans);

        while(str.length() < 4) str = '0' + str;

        cout << str << "\n";
    }
}
