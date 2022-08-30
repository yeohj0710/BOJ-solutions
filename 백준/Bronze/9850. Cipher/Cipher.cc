#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; getline(cin, str);

    for(int i=0; i<26; i++) {
        string tmp = "";

        for(int j=0; j<str.length(); j++) {
            if(str[j] >= 'A' && str[j] <= 'Z')
                tmp += 'A' + (str[j] - 'A' + i) % 26;
            else tmp += str[j];
        }

        string word = "";
        bool b1 = false, b2 = false;

        for(int j=0; j<tmp.length(); j++) {
            if(!(tmp[j] >= 'A' && tmp[j] <= 'Z')) {
                if(word == "CHIPMUNKS") b1 = true;
                else if(word == "LIVE") b2 = true;

                word = "";
            }
            else word += tmp[j];
        }
        if(word == "CHIPMUNKS") b1 = true;
        else if(word == "LIVE") b2 = true;

        if(b1 && b2) {
            cout << tmp << "\n";
            break;
        }
    }
}
