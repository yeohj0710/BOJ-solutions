#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string s; cin >> s;

    vector<bool> v(10);

    for(int i=0; i<s.length(); i++) {
        if(s[i] == '-') continue;

        v[s[i] - '0'] = true;
    }

    int ans = 0;

    for(int i=0; i<10; i++)
        if(v[i]) ans++;

    cout << ans << "\n";
}
