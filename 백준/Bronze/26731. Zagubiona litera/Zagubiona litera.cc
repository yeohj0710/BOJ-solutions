#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    string str; cin >> str;

    vector<bool> v(26);
    for(int i=0; i<str.length(); i++) v[str[i] - 'A'] = true;

    for(int i=0; i<26; i++)
        if(!v[i]) cout << char('A' + i) << "\n";
}
