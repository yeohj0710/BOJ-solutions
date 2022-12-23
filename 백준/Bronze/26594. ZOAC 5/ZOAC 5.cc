#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    string str; cin >> str;

    int ans = 1;

    for(int i=1; i<str.length(); i++) {
        if(str[i] == str[i-1]) ans++;
        else break;
    }

    cout << ans << "\n";
}
