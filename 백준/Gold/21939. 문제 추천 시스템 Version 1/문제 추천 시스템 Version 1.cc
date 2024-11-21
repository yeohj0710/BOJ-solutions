#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    multiset<pair<int, int>> ms;
    unordered_map<int, int> mp;

    while(n--) {
        int a, b; cin >> a >> b;

        ms.insert({b, a});
        mp[a] = b;
    }

    int m; cin >> m;

    while(m--) {
        string s; cin >> s;

        if(s == "recommend") {
            int x; cin >> x;

            if(x == 1) cout << (--ms.end())->second << "\n";
            else if(x == -1) cout << ms.begin()->second << "\n";
        }
        else if(s == "add") {
            int a, b; cin >> a >> b;

            ms.insert({b, a});
            mp[a] = b;
        }
        else if(s == "solved") {
            int x; cin >> x;

            int y = mp[x];

            ms.erase(ms.find({y, x}));
            mp.erase(x);
        }
    }
}
