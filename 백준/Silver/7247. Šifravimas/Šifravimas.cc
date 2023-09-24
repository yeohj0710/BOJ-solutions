#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_,.", ans = "";

    for(int i=0; i<str.length(); i++) {
        int x, y;

        for(int j=0; j<s.length(); j++)
            if(s[j] == str[i]) x = j + 1;

        for(int j=1; j<=s.length(); j++)
            if((j * j * j) % 29 + 1 == x) y = j;

        ans += s[y-1];
    }

    cout << ans << "\n";
}

