#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    string vowel = "aeiouAEIOU";

    for(int i=str.length()-1; i>=0; i--) {
        bool check = false;
        for(int j=0; j<vowel.length(); j++)
            if(str[i] == vowel[j]) check = true;

        if(check) {
            str = str.substr(0, i+1);
            break;
        }
    }

    cout << str << "ntry\n";
}
