#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; cin >> str;
        if(str == "end") break;

        bool check = true;

        bool flag = false;
        for(int i=0; i<str.length(); i++)
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') flag = true;
        if(!flag) check = false;

        string vow = "aeiou";
        for(int i=2; i<str.length(); i++) {
            bool b1 = false, b2 = false, b3 = false;

            for(int j=0; j<vow.length(); j++) {
                if(str[i-2] == vow[j]) b1 = true;
                if(str[i-1] == vow[j]) b2 = true;
                if(str[i] == vow[j]) b3 = true;
            }

            if(b1 == b2 && b2 == b3) check = false;
        }

        for(int i=1; i<str.length(); i++) {
            if(str[i] == 'e' || str[i] == 'o') continue;

            if(str[i-1] == str[i]) check = false;
        }

        cout << "<" << str << "> is ";

        if(check) cout << "acceptable.\n";
        else cout << "not acceptable.\n";
    }
}
