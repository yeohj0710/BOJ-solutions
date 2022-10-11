#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    while(a.length() < b.length()) a = '0' + a;
    while(a.length() > b.length()) b = '0' + b;

    string ans = "";

    for(int i=0; i<a.length(); i++) {
        if(a[i] <= '2' && b[i] <= '2') ans += '0';
        else if(a[i] >= '7' && b[i] >= '7') ans += '0';
        else ans += '9';
    }

    cout << ans << "\n";
}
