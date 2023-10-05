#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<string> v = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        string ans = "";

        for(int i=0; i<str.length(); i++) {
            if(str[i] >= '0' && str[i] <= '9') {
                ans += str[i];
                continue;
            }

            for(int j=0; j<v.size(); j++)
                for(int k=0; k<v[j].length(); k++)
                    if(v[j][k] == str[i]) ans += char('0' + j);
        }

        cout << ans.substr(0, 3) << "-" << ans.substr(3, 3) << "-" << ans.substr(6, 4) << "\n";
    }
}
