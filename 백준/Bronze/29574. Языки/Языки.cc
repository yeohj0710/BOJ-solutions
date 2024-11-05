#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    unordered_map<int, string> mp;

    for(int i=0; i<10; i++) {
        string s; cin >> s;

        mp[i] = s;
    }

    int t; cin >> t;

    while(t--) {
        vector<string> v;

        string s; cin >> s;

        for(int i=0; i<s.length(); i++) v.push_back(mp[s[i] - '0']);

        sort(v.begin(), v.end());

        cout << v.back() << "\n";
    }
}
