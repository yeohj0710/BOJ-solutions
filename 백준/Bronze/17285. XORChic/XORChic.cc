#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; getline(cin, str);

    for(int i=1; i<=200; i++) {
        string tmp = "";

        for(int j=0; j<str.length(); j++) tmp += char((int)(str[j]) ^ i);

        if(tmp.substr(0, 8) == "CHICKENS") {
            cout << tmp << "\n";
            break;
        }
    }
}
