#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    bool check = true;
    for(int i=0; i<str.length(); i++) {
        if(str[i] == 'p' && i+1 < str.length() && str[i+1] == 'i') i++;
        else if(str[i] == 'k' && i+1 < str.length() && str[i+1] == 'a') i++;
        else if(str[i] == 'c' && i+2 < str.length() && str[i+1] == 'h' && str[i+2] == 'u') i += 2;
        else check = false;
    }

    if(check) cout << "YES\n";
    else cout << "NO\n";
}
