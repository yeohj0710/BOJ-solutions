#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int tc; cin >> tc;

    for(int t=1; t<=tc; t++) {
        cout << "Data Set " << t << ":\n";

        int n, m; cin >> n >> m;

        unordered_map<string, int> mp;
        multiset<int> ms;

        while(n--) {
            string a; int b; cin >> a >> b;

            mp[a] = b;
            ms.insert(b);
        }

        int ans = 0, cnt = 0;

        while(m--) {
            string a; cin >> a;

            if(a != "?") {
                ans += mp[a];
                ms.erase(ms.find(mp[a]));
                continue;
            }

            cnt++;
        }

        vector<int> v(ms.begin(), ms.end());

        int mn = 0, mx = 0;

        for(int i=0; i<cnt; i++) mn += v[i];
        for(int i=v.size()-cnt; i<v.size(); i++) mx += v[i];

        cout << ans + mn << " " << ans + mx << "\n\n";
    }
}
