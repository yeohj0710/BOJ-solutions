#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    cin.ignore();

    while(T--) {
        string str; getline(cin, str);

        string tmp = "";

        for(int i=0; i<str.length(); i++) {
            if(str[i] == ' ') {
                reverse(tmp.begin(), tmp.end());
                cout << tmp << " ";

                tmp = "";
            }
            else tmp += str[i];
        }

        reverse(tmp.begin(), tmp.end());
        cout << tmp << "\n";
    }
}
