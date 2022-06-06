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

        string word = "";
        vector<string> v;

        for(int i=0; i<str.length(); i++) {
            if(str[i] >= 'a' && str[i] <= 'z') word += str[i];
            else {
                v.push_back(word);
                word = "";
            }
        }
        v.push_back(word);

        int ans = 0;

        for(int i=0; i<v.size(); i++) {
            if(v[i] == "u" || v[i] == "ur") ans += 10;
            else if(i+1 < v.size() && v[i] == "would" && v[i+1] == "of") ans += 10;
            else if(i+1 < v.size() && v[i] == "should" && v[i+1] == "of") ans += 10;

            for(int j=2; j<v[i].length(); j++)
                if(v[i][j-2] == 'l' && v[i][j-1] == 'o' && v[i][j] == 'l') {
                    ans += 10;
                    break;
                }
        }

        cout << ans << "\n";
    }
}
