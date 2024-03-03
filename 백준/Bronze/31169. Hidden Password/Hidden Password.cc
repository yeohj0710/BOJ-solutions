#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        for(int i=0; i<str.length(); i++) {
            str[i] = (str[i] - 'a' + 13) % 26 + 'a';
        }

        cout << str << "\n";
    }
}
