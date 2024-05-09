#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(1e6 + 1);

    for(int i=1; i<=1e6; i++) {
        string s = to_string(i);

        bool b1 = false, b2 = false, chk = true;

        for(int j=1; j<s.length(); j++) {
            if(s[j] == s[j-1]) chk = false;
            else if(!b1 && s[j] < s[j-1]) chk = false;
            else if(!b1 && s[j] > s[j-1]) b1 = true;
            else if(b1 && !b2 && s[j] < s[j-1]) b2 = true;
            else if(b1 && b2 && s[j] > s[j-1]) chk = false;
        }

        if(b1 && b2 && chk) v[i] = v[i-1] + 1;
        else v[i] = v[i-1];
    }

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        cout << v[b] - v[a-1] << "\n";
    }
}
