#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    unordered_map<int, bool> mp;
    bool chk = false;

    while(n--) {
        int a, b, c; cin >> a >> b >> c;

        if(mp[a] || mp[b] || mp[c]) chk = true;

        mp[a] = mp[b] = mp[c] = true;
    }

    if(chk) cout << 1 << "\n";
    else cout << 0 << "\n";
}
