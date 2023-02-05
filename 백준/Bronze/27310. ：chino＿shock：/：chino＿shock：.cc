#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    int ans = str.length();

    for(int i=0; i<str.length(); i++) {
        if(str[i] == ':') ans++;
        else if(str[i] == '_') ans += 5;
    }

    cout << ans << "\n";
}
