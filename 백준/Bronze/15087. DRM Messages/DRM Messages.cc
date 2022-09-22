#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    string a = str.substr(0, str.length()/2);
    string b = str.substr(str.length()/2, str.length()/2);

    int x = 0, y = 0;
    for(int i=0; i<a.length(); i++) x += a[i] - 'A';
    for(int i=0; i<b.length(); i++) y += b[i] - 'A';

    for(int i=0; i<a.length(); i++) a[i] = char('A' + (a[i] - 'A' + x) % 26);
    for(int i=0; i<b.length(); i++) b[i] = char('A' + (b[i] - 'A' + y) % 26);

    string ans = "";

    for(int i=0; i<a.length(); i++)
        ans += char('A' + (a[i] - 'A' + b[i] - 'A') % 26);

    cout << ans << "\n";
}
