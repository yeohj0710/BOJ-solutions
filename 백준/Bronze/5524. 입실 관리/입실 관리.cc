#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        for(int i=0; i<str.length(); i++) {
            if(str[i] >= 'A' && str[i] <= 'Z')
                cout << char(str[i] - 'A' + 'a');
            else cout << str[i];
        }
        cout << "\n";
    }
}
