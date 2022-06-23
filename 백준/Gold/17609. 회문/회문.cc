#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        bool check = true;
        for(int i=0; i<str.length(); i++)
            if(str[i] != str[str.length()-1-i]) check = false;
        if(check) {
            cout << 0 << "\n";
            continue;
        }

        bool b1 = true, c1 = false;
        int i = 0, j = str.length()-1;
        while(i < j) {
            if(str[i] == str[j]) i++, j--;
            else {
                if(c1) b1 = false, i++, j--;
                else c1 = true, i++;
            }
        }

        bool b2 = true, c2 = false;
        i = 0, j = str.length()-1;
        while(i < j) {
            if(str[i] == str[j]) i++, j--;
            else {
                if(c2) b2 = false, i++, j--;
                else c2 = true, j--;
            }
        }

        if(b1 || b2) cout << 1 << "\n";
        else cout << 2 << "\n";
    }
}
