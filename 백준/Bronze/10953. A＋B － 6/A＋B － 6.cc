#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        string a = "";
        int i = 0;

        while(str[i] != ',') {
            a += str[i];
            i++;
        }

        string b = "";
        i++;

        while(i < str.length()) {
            b += str[i];
            i++;
        }

        int ans = stoi(a) + stoi(b);

        cout << ans << "\n";
    }
}
