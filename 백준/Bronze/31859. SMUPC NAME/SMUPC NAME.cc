#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; string s; cin >> n >> s;

    string ss = "";
    unordered_map<char, bool> m;
    int cnt = 0;

    for(int i=0; i<s.length(); i++) {
        if(!m[s[i]]) ss += s[i];
        else cnt++;

        m[s[i]] = true;
    }

    s = ss;

    s += to_string(cnt + 4);

    s = to_string(n + 1906) + s;

    reverse(s.begin(), s.end());

    s = "smupc_" + s;

    cout << s << "\n";
}
