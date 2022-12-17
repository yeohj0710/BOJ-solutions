#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T; cin.ignore();

    string a = "aeiouyAEIOUY";
    string b = "eiouyaEIOUYA";

    while(T--) {
        string str; getline(cin, str);

        for(int i=0; i<str.length(); i++) {
            bool check = false;

            for(int j=0; j<a.length(); j++)
                if(str[i] == a[j]) {
                    cout << b[j];
                    check = true;
                }

            if(!check) cout << str[i];
        }
        cout << "\n";
    }
}
