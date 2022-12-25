#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    string str; cin >> str;

    char ch = str[0];
    int ans = 0;

    for(int i=1; i<str.length(); i++) {
        if(str[i] != ch) ch = str[i];
        else ans++;
    }

    cout << ans << "\n";
}
