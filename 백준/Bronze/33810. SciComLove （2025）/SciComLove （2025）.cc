#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string s = "SciComLove";
    string t; cin >> t;

    int ans = 0;

    for(int i=0; i<s.length(); i++)
        if(s[i] != t[i]) ans++;

    cout << ans << "\n";
}
