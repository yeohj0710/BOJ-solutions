#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int l = str.length();
        char c = str[l-1];

        if(c == 'a') cout << str << "s\n";
        else if(c == 'i' || c == 'y') cout << str.substr(0, l-1) << "ios\n";
        else if(c == 'l') cout << str << "es\n";
        else if(c == 'n') cout << str.substr(0, l-1) << "anes\n";
        else if(str[l-2] == 'n' && c == 'e') cout << str.substr(0, l-2) << "anes\n";
        else if(c == 'o') cout << str << "s\n";
        else if(c == 'r') cout << str << "es\n";
        else if(c == 't') cout << str << "as\n";
        else if(c == 'u') cout << str << "s\n";
        else if(c == 'v') cout << str << "es\n";
        else if(c == 'w') cout << str << "as\n";
        else cout << str << "us\n";
    }
}
