#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int tc; cin >> tc;

    for(int t=1; t<=tc; t++) {
        cout << "Case #" << t << ": ";

        int n; cin >> n; cin.ignore();

        vector<string> v(n);
        for(int i=0; i<n; i++) getline(cin, v[i]);

        int m; cin >> m; cin.ignore();

        int cnt = 0, ans = 0;
        unordered_map<string, bool> mp;

        while(m--) {
            string s; getline(cin, s);

            if(!mp[s]) {
                if(cnt == n-1) {
                    ans++;
                    mp.clear();
                    cnt = 1;
                }
                else cnt++;
            }

            mp[s] = true;
        }

        cout << ans << "\n";
    }
}
