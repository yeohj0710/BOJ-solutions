#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        vector<int> v(26);
        for(int i=0; i<str.length(); i++) v[str[i] - 'a']++;

        sort(v.begin(), v.end(), greater<int>());

        int ans = 0;
        for(int i=2; i<v.size(); i++) ans += v[i];

        cout << ans << "\n";
    }
}
