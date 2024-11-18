#include <bits/stdc++.h>
#define int long long
using namespace std;

string cvt(string num, int fromBase, int toBase) {
    int dec = 0;

    for (char digit : num) {
        int value = isdigit(digit) ? digit - '0' : digit - 'A' + 10;

        if (value >= fromBase)
            return "";

        dec = dec * fromBase + value;
    }

    if (dec == 0) return "0";

    string res;

    while (dec > 0) {
        int r = dec % toBase;
        res += (r < 10) ? '0' + r : 'A' + (r - 10);
        dec /= toBase;
    }

    reverse(res.begin(), res.end());

    return res;
}

string cvt(int num, int fromBase, int toBase) {
    return cvt(to_string(num), fromBase, toBase);
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<string> v(3);

    string tot = "";

    for(int i=0; i<3; i++) {
        cin >> v[i];

        v[i] = cvt(v[i], 10, 2);

        while(v[i].length() < 4) v[i] = "0" + v[i];

        v[i] = v[i].substr(v[i].length() - 4, 4);

        tot += v[i];
    }

    string ans = cvt(tot, 2, 10);

    while(ans.length() < 4) ans = "0" + ans;

    ans = ans.substr(ans.length() - 4, 4);

    cout << ans << "\n";
}
