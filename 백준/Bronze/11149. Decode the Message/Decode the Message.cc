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

        string temp = "";
        for(int i=0; i<str.length(); i++) {
            if(str[i] != ' ') temp += str[i];
            else {
                v.push_back(temp);
                temp = "";
            }
        }
        v.push_back(temp);

        string ans = "";
        for(int i=0; i<v.size(); i++) {
            int x = 0;
            for(int j=0; j<v[i].length(); j++) x += v[i][j] - 'a';
            x = x % 27;

            if(x != 26) ans += char('a' + x);
            else ans += ' ';
        }

        cout << ans << "\n";
    }
}
