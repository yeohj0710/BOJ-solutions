#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        cout << str << "\n";
        
        if(str.length() == 1) continue;

        for(int i=1; i<str.length()-1; i++) {
            cout << str[i];

            for(int j=1; j<str.length()-1; j++) cout << " ";

            cout << str[str.length()-1-i] << "\n";
        }

        for(int i=str.length()-1; i>=0; i--) cout << str[i];
        cout << "\n";
    }
}
