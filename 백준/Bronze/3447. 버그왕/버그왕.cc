#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str;

    while(getline(cin, str)) {
        string ans;

        for(int j=0; j<100; j++) {
            ans = "";

            for(int i=0; i<str.length(); i++) {
                if(i < str.length()-2 && str.substr(i, 3) == "BUG") i += 2;
                else ans += str[i];
            }

            str = ans;
        }

        cout << ans << "\n";
    }
}
