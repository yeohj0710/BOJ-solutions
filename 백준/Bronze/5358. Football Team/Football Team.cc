#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    string str;

    while(getline(cin, str)) {
        for(int i=0; i<str.length(); i++) {
            if(str[i] == 'e') str[i] = 'i';
            else if(str[i] == 'i') str[i] = 'e';
            else if(str[i] == 'E') str[i] = 'I';
            else if(str[i] == 'I') str[i] = 'E';
        }

        cout << str << "\n";
    }
}
