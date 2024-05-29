#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string a; cin >> a;

    string b = "";

    for(int i=0; i<a.length(); i++) {
        int x = a[i] - 'a' + 97;

        string c = "";

        for(int j=0; j<8; j++) {
            if(x % 2 == 0) c = '0' + c;
            else c = '1' + c;

            x /= 2;
        }

        b += c;
    }

    while(b.length() % 4 != 0) b += '0';

    string ans = "";

    for(int i=0; i<b.length(); i+=4) {
        string d = b.substr(i, 4);

        int x = 0;

        for(int j=0; j<4; j++) x = x * 2 + d[j] - '0';

        if(x >= 0 && x <= 9) ans += char('0' + x);
        else ans += char('A' + x - 10);
    }

    cout << ans << "\n";
}
