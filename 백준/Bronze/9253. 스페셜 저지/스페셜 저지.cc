#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b, c; cin >> a >> b >> c;

    if(a.find(c) >= a.length() || b.find(c) >= b.length()) {
        cout << "NO\n";
        return 0;
    }

    bool check = true;

    if(a.find(c) > 0 && b.find(c) > 0 && a[a.find(c)-1] == b[b.find(c)-1]) check = false;
    if(a.find(c) + c.length() < a.length() && b.find(c) + c.length() < b.length()
       && a[a.find(c) + c.length()] == b[b.find(c) + c.length()]) check = false;

    if(check) cout << "YES\n";
    else cout << "NO\n";
}
