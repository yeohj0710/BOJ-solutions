#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; cin >> str;
        if(str == "#") break;

        int cnt[26] = {}, v[26] = {}, x = 0;

        for(int i=0; i<str.length(); i++) {
            bool check = false;
            if(str[i] >= 'A' && str[i] <= 'Z') {
                check = true;
                str[i] = char(str[i] - 'A' + 'a');
            }

            if(cnt[str[i] - 'a'] > 0) {
                if(v[str[i] - 'a'] == 0) {
                    x++;
                    v[str[i] - 'a'] = x;
                }

                if(v[str[i] - 'a'] == 1) cout << "*";
                else if(v[str[i] - 'a'] == 2) cout << "?";
                else if(v[str[i] - 'a'] == 3) cout << "/";
                else if(v[str[i] - 'a'] == 4) cout << "+";
                else if(v[str[i] - 'a'] == 5) cout << "!";
            }
            else {
                if(check) cout << char(str[i] - 'a' + 'A');
                else cout << str[i];
                cnt[str[i] - 'a']++;
            }
        }

        cout << "\n";
    }
}
