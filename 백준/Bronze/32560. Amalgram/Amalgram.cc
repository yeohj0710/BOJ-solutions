#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string a, b; cin >> a >> b;

    vector<int> v(26), u(26);

    for(int i=0; i<a.length(); i++) v[a[i] - 'a']++;
    for(int i=0; i<b.length(); i++) u[b[i] - 'a']++;

    for(int i=0; i<26; i++)
        for(int j=0; j<max(v[i], u[i]); j++) cout << char('a' + i);
    cout << "\n";
}
