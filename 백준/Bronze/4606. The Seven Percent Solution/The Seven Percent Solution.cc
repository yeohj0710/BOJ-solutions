#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; getline(cin, str);

        if(str == "#") break;

        string ans = "";
        for(int i=0; i<str.length(); i++) {
            if(str[i] == ' ') ans += "%20";
            else if(str[i] == '!') ans += "%21";
            else if(str[i] == '$') ans += "%24";
            else if(str[i] == '%') ans += "%25";
            else if(str[i] == '(') ans += "%28";
            else if(str[i] == ')') ans += "%29";
            else if(str[i] == '*') ans += "%2a";
            else ans += str[i];
        }

        cout << ans << "\n";
    }
}
