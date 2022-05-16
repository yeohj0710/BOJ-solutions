#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    string a = str.substr(0, str.length()/3);
    string b = str.substr(str.length()/3, str.length()/3);
    string c = str.substr(str.length()*2/3, str.length()/3);

    string ans;
    if(a != b && b == c) ans = b;
    else ans = a;

    cout << ans << "\n";
}
