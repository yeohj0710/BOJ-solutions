#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    string s; getline(cin, s);

    for(int i=2; i<=16; i++) {
        int x = n;

        string ss = "";

        while(x > 0) {
            char c;

            if(x % i < 10) c = char('0' + x % i);
            else c = char('a' + x % i - 10);

            ss += c;

            x /= i;
        }

        reverse(ss.begin(), ss.end());

        int m = ss.length();

        if(m >= 2 && ss[m-1] == '0' && ss[m-2] == '0') {
            cout << i << " " << ss << "\n";
            return 0;
        }
    }

    cout << "impossible\n";
}
