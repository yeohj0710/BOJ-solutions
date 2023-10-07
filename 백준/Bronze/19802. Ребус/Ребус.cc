#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str, ans = "";

    while(cin >> str) {
        int a = 0, b = 0;

        for(int i=0; i<str.length(); i++) {
            if(str[i] != '\'') break;

            a++;
        }

        for(int i=str.length()-1; i>=0; i--) {
            if(str[i] != '\'') break;

            b++;
        }

        ans += str.substr(a * 2, str.length() - a * 2 - b * 2);
    }

    cout << ans << "\n";
}
