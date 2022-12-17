#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        for(int i=1; i<str.length(); i++)
            if(str[i] != str[i-1]) cout << str[i-1];

        cout << str.back() << "\n";
    }
}
