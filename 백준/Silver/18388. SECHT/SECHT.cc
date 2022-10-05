#include <bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a = "QWERTYUIOASDFGHJKZXCVBN";
    string b = "WERTYUIOPSDFGHJKLXCVBNM";

    string str; getline(cin, str);

    string ans = "";

    for(int i=0; i<str.length(); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') ans += str[i];
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            for(int j=0; j<a.length(); j++)
                if(str[i] == a[j]) ans += b[j];
        }
        else ans += str[i];
    }

    cout << ans << "\n";
}
