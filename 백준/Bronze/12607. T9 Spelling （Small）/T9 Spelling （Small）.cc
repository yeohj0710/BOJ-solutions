#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string cnv[26] = {"2", "22", "222", "3", "33", "333", "4", "44", "444",
                       "5", "55", "555", "6", "66", "666", "7", "77", "777", "7777",
                       "8", "88", "888", "9", "99", "999", "9999"};

    int T; cin >> T;
    cin.ignore();

    for(int t=1; t<=T; t++) {
        string str; getline(cin, str);

        string ans = "";

        for(int i=0; i<str.length(); i++) {
            if(str[i] >= 'a' && str[i] <= 'z') {
                string temp = cnv[str[i] - 'a'];

                if(ans.length() == 0) ans += temp;
                else if(ans[ans.length()-1] == temp[0]) ans += " " + temp;
                else ans += temp;
            }
            else {
                string temp = "0";

                if(ans.length() == 0) ans += temp;
                else if(ans[ans.length()-1] == temp[0]) ans += " " + temp;
                else ans += temp;
            }
        }

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
