#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string a; cin >> a;

    string b = "";

    for(int i=0; i<a.length(); i++) {
        int x = 0;

        if(a[i] >= '0' && a[i] <= '9') x = a[i] - '0';
        else if(a[i] >= 'A') x = a[i] - 'A' + 10;

        string c = "";

        for(int j=0; j<4; j++) {
            c = char('0' + x % 2) + c;

            x /= 2;
        }

        b += c;
    }

    string ans = "";

    for(int i=0; i<b.length(); i+=8) {
        int x = 0;

        for(int j=0; j<8; j++) x = x * 2 + (b[i+j] - '0');

        ans += char(x);
    }

    cout << ans << "\n";
}
