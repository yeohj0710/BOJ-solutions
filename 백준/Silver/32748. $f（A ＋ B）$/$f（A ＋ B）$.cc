#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    unordered_map<char, char> mp1, mp2;

    for(int i=0; i<10; i++) {
        char x; cin >> x;

        mp1[char('0' + i)] = x;
        mp2[x] = char('0' + i);
    }

    string a, b; cin >> a >> b;

    string c = "", d = "";

    for(int i=0; i<a.length(); i++) c += mp2[a[i]];
    for(int i=0; i<b.length(); i++) d += mp2[b[i]];

    string e = to_string(stoi(c) + stoi(d));

    string f = "";

    for(int i=0; i<e.length(); i++) f += mp1[e[i]];

    cout << f << "\n";
}
