#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; cin >> str;
        if(str == "0") break;

        bool check = true;

        for(int i=0; i<str.length(); i++)
            if(str[i] != str[str.length()-1-i]) check = false;

        if(check) cout << "yes\n";
        else cout << "no\n";
    }
}
