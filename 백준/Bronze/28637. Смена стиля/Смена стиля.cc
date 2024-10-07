#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    while(n--) {
        string s; cin >> s;

        vector<string> v;
        string ss = "";

        for(int i=0; i<s.length(); i++) {
            if(s[i] >= 'A' && s[i] <= 'Z' && ss != "") {
                for(int j=0; j<ss.length(); j++)
                    if(ss[j] >= 'A' && ss[j] <= 'Z') ss[j] += 'a' - 'A';

                v.push_back(ss);
                ss = "";

                ss += s[i];
            }
            else ss += s[i];
        }
        if(ss != "") {
            for(int i=0; i<ss.size(); i++)
                if(ss[i] >= 'A' && ss[i] <= 'Z') ss[i] += 'a' - 'A';

            v.push_back(ss);
        }

        string ans = "";

        for(int i=0; i<v.size(); i++) {
            if(i > 0) ans += "_";

            ans += v[i];
        }

        cout << ans << "\n";
    }
}
