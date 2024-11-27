#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string s; cin >> s;

    vector<int> v(26);

    for(int i=0; i<s.length(); i++) {
        v[s[i] - 'a']++;
    }

    int n; cin >> n;

    while(n--) {
        string ss; cin >> ss;

        vector<int> u = v;
        bool chk = true;

        for(int i=0; i<ss.length(); i++) {
            u[ss[i] - 'a']--;

            if(u[ss[i] - 'a'] < 0) chk = false;
        }

        if(chk) cout << ss << "\n";
    }
}
