#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        string str; cin >> str;

        int ans = 1, mod = 1e9 + 7;

        for(int i=0; i<str.length(); i++) {
            vector<char> v;

            if(i > 0) v.push_back(str[i-1]);
            v.push_back(str[i]);
            if(i+1 < str.length()) v.push_back(str[i+1]);

            sort(v.begin(), v.end());
            v.erase(unique(v.begin(), v.end()), v.end());

            ans = (ans * v.size()) % mod;
        }

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
