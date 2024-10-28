#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<int> v;
    v.push_back(0);

    unordered_map<int, bool> mp;
    mp[0] = true;

    for(int i=1; i<=n; i++) {
        int x = v.back();

        x = x - i;

        if(x < 0 || mp[x]) x = v.back() + i;

        mp[x] = true;
        v.push_back(x);
    }

    cout << v.back() << "\n";
}
