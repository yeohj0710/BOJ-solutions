#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        if(str.length() != 7) {
            cout << 0 << "\n";
            continue;
        }

        if(!(str[0] == str[1] && str[1] == str[4])) {
            cout << 0 << "\n";
            continue;
        }

        if(!(str[2] == str[3] && str[3] == str[5] && str[5] == str[6])) {
            cout << 0 << "\n";
            continue;
        }

        if(str[0] == str[2]) {
            cout << 0 << "\n";
            continue;
        }

        cout << 1 << "\n";
    }
}
