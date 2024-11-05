#include <bits/stdc++.h>
#define int long long
using namespace std;

int cvt(string num, int fromBase, int toBase) {
    int dec = 0;

    for (char digit : num) {
        int value = isdigit(digit) ? digit - '0' : digit - 'A' + 10;

        if (value >= fromBase)
            return -1;

        dec = dec * fromBase + value;
    }

    if (dec == 0) return 0;

    string res;

    while (dec > 0) {
        int r = dec % toBase;
        res += (r < 10) ? '0' + r : 'A' + (r - 10);
        dec /= toBase;
    }

    reverse(res.begin(), res.end());

    return stoll(res);
}

int cvt(int num, int fromBase, int toBase) {
    return cvt(to_string(num), fromBase, toBase);
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        int a, b, c; cin >> a >> b >> c;

        bool chk = false;

        for(int i=2; i<=16; i++) {
            int aa = cvt(a, i, 10), bb = cvt(b, i, 10), cc = cvt(c, i, 10);

            if(aa * bb == cc) {
                cout << i << "\n";
                chk = true;
                break;
            }
        }

        if(!chk) cout << 0 << "\n";
    }
}
