#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    int num = 0, mul = 1, mod = 1e9 + 7;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == 'X') num = (num + mul) % mod;
        mul = (mul * 2) % mod;
    }

    int tot = 1;

    for(int i=0; i<str.length(); i++) tot = (tot * 2) % mod;

    int ans = tot - 1 - num;

    if(ans < 0) ans += mod;

    cout << ans << "\n";
}
