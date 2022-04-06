#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string ans; int ansLen = 0;

    while(true) {
        string str; cin >> str;

        if(str == "E-N-D") break;

        string temp = "";
        for(int i=0; i<str.length(); i++)
            if((str[i] >= 'a' && str[i] <= 'z')
               || (str[i] >= 'A' && str[i] <= 'Z')
               || str[i] == '-') temp += str[i];

        if(temp.length() > ansLen) {
            ans = temp;
            ansLen = temp.length();
        }
    }

    for(int i=0; i<ansLen; i++) {
        if(ans[i] >= 'A' && ans[i] <= 'Z') cout << char(ans[i] + 'a' - 'A');
        else cout << ans[i];
    }
}
