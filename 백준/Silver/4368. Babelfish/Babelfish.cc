#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    map<string, string> m;

    while(true) {
        string str; getline(cin, str);
        if(str == "") break;

        string a = "", b = "";

        for(int i=0; i<str.length(); i++) {
            if(str[i] == ' ') {
                b = str.substr(i+1, str.length()-(i+1));
                break;
            }
            a += str[i];
        }

        m[b] = a;
    }

    string str;

    while(cin >> str) {
        if(m[str] != "") cout << m[str] << "\n";
        else cout << "eh\n";
    }
}
