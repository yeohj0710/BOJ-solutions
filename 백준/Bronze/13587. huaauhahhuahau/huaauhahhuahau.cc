#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    string temp = "", vowel = "aeiou";

    for(int i=0; i<str.length(); i++)
        for(int j=0; j<vowel.length(); j++)
            if(str[i] == vowel[j]) temp += str[i];

    bool check = true;
    for(int i=0; i<temp.length(); i++)
        if(temp[i] != temp[temp.length()-1-i]) check = false;

    if(check) cout << "S\n";
    else cout << "N\n";
}
