#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; cin >> str;
        if(str == "#") break;

        bool found = false;
        for(int i=0; i<str.length(); i++) {
            string temp = "";
            for(int j=0; j<str.length(); j++)
                if(j != i) temp += str[j];

            bool check = true;
            for(int j=0; j<temp.length(); j++)
                if(temp[j] != temp[temp.length()-1-j]) check = false;

            if(check) {
                cout << temp << "\n";
                found = true;
                break;
            }
        }

        if(!found) cout << "not possible\n";
    }
}
