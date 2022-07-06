#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == 'X') {
            if(i+3 < str.length() && str[i+1] == 'X' && str[i+2] == 'X' && str[i+3] == 'X') {
                str[i] = 'A', str[i+1] = 'A', str[i+2] = 'A', str[i+3] = 'A';
            }
            else if(i+1 < str.length() && str[i+1] == 'X') {
                str[i] = 'B', str[i+1] = 'B';
            }
            else {
                cout << -1 << "\n";
                return 0;
            }
        }
    }

    cout << str << "\n";
}
