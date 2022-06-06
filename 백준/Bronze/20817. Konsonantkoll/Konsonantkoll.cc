#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; getline(cin, str);

    string v = "bcdfghjklmnpqrstvwxz";

    for(int i=0; i<str.length(); i++) {
        bool check = false;
        for(int j=0; j<v.length(); j++)
            if(str[i] == v[j]) check = true;

        if(check && i+2 < str.length() && str[i] == str[i+1] && str[i] == str[i+2]) continue;
        else cout << str[i];
    }
    cout << "\n";
}
