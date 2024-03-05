#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    string s = "";

    for(int i=1; ; i++) {
        s += to_string(i);

        if(s == str) {
            cout << i << "\n";
            return 0;
        }
        if(s.length() > str.length()) {
            cout << -1 << "\n";
            return 0;
        }
    }
}
