#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    string a, b; cin >> a;

    cin.ignore();

    getline(cin, b);

    string c = "";
    for(int i=0; i<b.length(); i++)
        if('A' <= b[i] && b[i] <= 'Z') c += b[i];

    for(int i=0; i<c.length(); i++)
        c[i] = char('A' + (c[i] + (a[i % a.length()] - 'A') - 'A') % 26);

    cout << c << "\n";
}
