#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    while(true) {
        string str; cin >> str;

        if(str == "quit!") break;

        if(str.length() >= 4 && str[str.length()-2] == 'o' && str[str.length()-1] == 'r'
           && str[str.length()-3] != 'a' && str[str.length()-3] != 'e' && str[str.length()-3] != 'i'
           && str[str.length()-3] != 'o' && str[str.length()-3] != 'u') str = str.substr(0, str.length()-2) + "our";

        cout << str << "\n";
    }
}
