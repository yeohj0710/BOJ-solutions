#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string s = "";

    for(int i=0; i<3; i++) {
        string ss; cin >> ss;

        s += ss;
    }

    for(int i=1; i<s.length(); i++)
        if(i % 2 == 0 && s[i] == s[i-1]) s[i] = '\'';

    cout << s << "\n";
}
