#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    bool chk = false;

    for(int i=0; i<str.length(); i++) {
        str = str.substr(1, str.length()-1) + str[0];

        bool flag = true;

        for(int j=0; j<str.length(); j++)
            if(str[j] != str[str.length()-1-j]) flag = false;

        if(flag) {
            chk = true;
            break;
        }
    }

    if(chk) cout << "yes\n";
    else cout << "no\n";
}
