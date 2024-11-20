#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string a, b; int n; cin >> a >> n >> b;

    vector<bool> v(26);
    for(int i=0; i<a.length(); i++) v[a[i] - 'A'] = true;

    string s = a;

    for(int i=0; i<26; i++)
        if(!v[i]) s += char('A' + i);

    s = s.substr(26 - (n - 1), n - 1) + s.substr(0, 26 - (n - 1));

    string ans = "";

    for(int i=0; i<b.length(); i++) {
        for(int j=0; j<s.length(); j++) {
            if(s[j] == b[i]) ans += char('A' + j);
        }
    }

    cout << ans << "\n";
}
