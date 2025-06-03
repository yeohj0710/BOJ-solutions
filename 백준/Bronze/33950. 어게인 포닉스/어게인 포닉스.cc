#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        string s; cin >> s;

        for(int i=1; i<s.length(); i++)
            if(s[i-1] == 'P' && s[i] == 'O') s = s.substr(0, i) + "H" + s.substr(i, s.length());

        cout << s << "\n";
    }
}
