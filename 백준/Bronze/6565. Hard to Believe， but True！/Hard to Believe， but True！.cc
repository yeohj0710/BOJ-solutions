#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; cin >> str;
        if(str == "0+0=0") {
            cout << "True\n";
            break;
        }

        string a = "", b = "", c = "";
        int idx = 0;

        while(str[idx] != '+') {
            a += str[idx];
            idx++;
        }

        idx++;

        while(str[idx] != '=') {
            b += str[idx];
            idx++;
        }

        idx++;

        while(idx < str.length()) {
            c += str[idx];
            idx++;
        }

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        reverse(c.begin(), c.end());

        if(stoi(a) + stoi(b) == stoi(c)) cout << "True\n";
        else cout << "False\n";
    }
}
