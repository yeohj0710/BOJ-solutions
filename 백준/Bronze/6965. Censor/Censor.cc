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

        vector<string> v;
        string tmp = "";

        for(int i=0; i<str.length(); i++) {
            if(str[i] == ' ') {
                v.push_back(tmp);
                tmp = "";
            }
            else tmp += str[i];
        }
        v.push_back(tmp);

        for(int i=0; i<v.size(); i++) {
            if(v[i].length() != 4) cout << v[i] << " ";
            else cout << "**** ";
        }
        cout << "\n\n";
    }
}
