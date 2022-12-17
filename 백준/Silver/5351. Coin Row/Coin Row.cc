#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T; cin.ignore();

    while(T--) {
        string str; getline(cin, str);

        vector<int> v;
        string tmp = "";

        for(int i=0; i<str.length(); i++) {
            if(str[i] == ' ') {
                v.push_back(stoi(tmp));
                tmp = "";
            }
            else tmp += str[i];
        }
        v.push_back(stoi(tmp));

        if(v.size() == 1) {
            cout << v[0] << "\n";
            continue;
        }

        vector<int> dp(v.size());
        dp[0] = v[0], dp[1] = max(v[0], v[1]);

        for(int i=2; i<dp.size(); i++)
            dp[i] = max(dp[i-2] + v[i], dp[i]);

        cout << dp.back() << "\n";
    }
}
