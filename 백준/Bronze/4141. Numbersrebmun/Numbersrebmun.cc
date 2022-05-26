#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int cnv[26] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        string temp = "";

        for(int i=0; i<str.length(); i++) {
            if(str[i] >= 'a' && str[i] <= 'z') temp += to_string(cnv[str[i] - 'a']);
            else if(str[i] >= 'A' && str[i] <= 'Z') temp += to_string(cnv[str[i] - 'A']);
        }

        bool check = true;

        for(int i=0; i<temp.length(); i++)
            if(temp[i] != temp[temp.length()-1-i]) check = false;

        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}
