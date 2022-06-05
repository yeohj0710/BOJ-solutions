#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; cin >> str;
        if(str == "#") break;

        int mode = -1, ans = -1;
        string s = "qwertasdfgzxcvb";

        for(int i=0; i<str.length(); i++) {
            bool check = false;
            for(int j=0; j<s.length(); j++)
                if(str[i] == s[j]) check = true;

            if(check && mode != 0) ans++, mode = 0;
            else if(!check && mode != 1) ans++, mode = 1;
        }

        cout << ans << "\n";
    }
}
