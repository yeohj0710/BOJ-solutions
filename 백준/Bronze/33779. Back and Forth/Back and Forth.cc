#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string s; cin >> s;

    bool chk = true;

    for(int i=0; i<s.length()/2; i++)
        if(s[i] != s[s.length() - 1 - i]) chk = false;

    if(chk) cout << "beep";
    else cout << "boop";

    cout << "\n";
}
