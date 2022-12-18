#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        string str; int a, b; cin >> str >> a >> b;

        for(int i=0; i<str.length(); i++) {
            if(i >= a && i < b) continue;

            cout << str[i];
        }
        cout << "\n";
    }
}
