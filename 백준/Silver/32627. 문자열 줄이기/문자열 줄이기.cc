#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    string s; cin >> s;

    string ss = s;

    sort(ss.begin(), ss.end());

    ss = ss.substr(m, n - m);

    vector<int> v(26);

    for(int i=0; i<ss.length(); i++) v[ss[i] - 'a']++;

    string ns = "";

    for(int i=n-1; i>=0; i--) {
        if(v[s[i] - 'a'] > 0) {
            ns += s[i];
            v[s[i] - 'a']--;
        }
    }

    reverse(ns.begin(), ns.end());

    cout << ns << "\n";
}
