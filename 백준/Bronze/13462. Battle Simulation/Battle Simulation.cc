#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    for(int i=0; i<str.length(); i++) {
        if(i+2 < str.length() && str[i] != str[i+1]
        && str[i+1] != str[i+2] && str[i] != str[i+2]) {
            cout << "C";
            i += 2;
        }
        else if(str[i] == 'R') cout << "S";
        else if(str[i] == 'B') cout << "K";
        else if(str[i] == 'L') cout << "H";
    }
    cout << "\n";
}
