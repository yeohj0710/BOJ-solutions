#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Data Set " << t << ":\n";

        int N; string str; cin >> N >> str;

        int ans = 0;

        while(N--) {
            string s; cin >> s;

            bool chk = false;

            for(int i=0; i<str.length(); i++)
                for(int j=0; j<s.length(); j++)
                    if(str[i] == s[j]) chk = true;

            if(chk) ans++;
        }

        cout << ans << "\n\n";
    }
}
