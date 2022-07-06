#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        string str; cin >> str;

        string ans = "";

        for(int i=0; i<str.length()-1; i++) {
            if(str[i] < str[i+1]) ans += str[i], ans += str[i];
            else if(str[i] > str[i+1]) ans += str[i];
            else {
                int j = i+1;
                while(j < str.length() && str[j] == str[j-1]) j++;

                if(j < str.length() && str[i] < str[j]) ans += str[i], ans += str[i];
                else ans += str[i];
            }
        }
        ans += str.back();

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
