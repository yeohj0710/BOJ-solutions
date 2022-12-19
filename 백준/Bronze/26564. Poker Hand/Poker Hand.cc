#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        unordered_map<char, int> m;
        vector<char> v;

        for(int i=0; i<5; i++) {
            string str; cin >> str;

            if(m[str[0]] == 0) v.push_back(str[0]);

            m[str[0]]++;
        }

        int ans = 0;

        for(int i=0; i<v.size(); i++) ans = max(ans, m[v[i]]);

        cout << ans << "\n";
    }
}
