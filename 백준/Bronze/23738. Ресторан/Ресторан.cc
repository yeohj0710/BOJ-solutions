#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    map<char, string> m;

    m['B'] = "v";
    m['E'] = "ye";
    m['H'] = "n";
    m['P'] = "r";
    m['C'] = "s";
    m['Y'] = "u";
    m['X'] = "h";

    string str; cin >> str;
    string ans = "";

    for(int i=0; i<str.length(); i++) {
        if(m[str[i]] != "") ans += m[str[i]];
        else ans += char(str[i] - 'A' + 'a');
    }

    cout << ans << "\n";
}
