#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    string s = "KOREA";

    int ans = 0;

    for(int i=0; i<str.length(); i++)
        if(str[i] == s[ans % 5]) ans++;

    cout << ans << "\n";
}
