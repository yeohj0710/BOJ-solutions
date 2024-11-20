#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        string s; cin >> s;

        if(s == "#") break;

        double ans = 0;

        for(int i=0; i<s.length(); i++) {
            if(s[i] == '/') {
                bool chk = true;

                for(int j=i-1; j>=0; j--) {
                    if(s[j] == '.') break;
                    if(s[j] == '/' || s[j] == '\\' || s[j] == '|') chk = false;
                }

                if(chk) ans += 100;
            }
            else if(s[i] == '\\') {
                bool chk = true;

                for(int j=i+1; j<s.length(); j++) {
                    if(s[j] == '.') break;
                    if(s[j] == '/' || s[j] == '\\' || s[j] == '|') chk = false;
                }

                if(chk) ans += 100;
            }
            else if(s[i] == '.') ans += 100;
            else if(s[i] == '|') {
                bool chk = true;

                for(int j=i-1; j>=0; j--) {
                    if(s[j] == '.') break;
                    if(s[j] == '/' || s[j] == '\\' || s[j] == '|') chk = false;
                }

                if(chk) ans += 50;

                chk = true;

                for(int j=i+1; j<s.length(); j++) {
                    if(s[j] == '.') break;
                    if(s[j] == '/' || s[j] == '\\' || s[j] == '|') chk = false;
                }

                if(chk) ans += 50;
            }
            else if(s[i] == '_') continue;
        }

        ans /= s.length();
        ans = (int)ans;

        cout << ans << "\n";
    }
}
