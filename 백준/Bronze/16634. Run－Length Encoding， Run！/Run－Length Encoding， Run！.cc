#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    char c; cin >> c;

    if(c == 'E') {
        string str; cin >> str;

        int cnt = 1;
        for(int i=1; i<str.length(); i++) {
            if(str[i] == str[i-1]) cnt++;
            else {
                cout << str[i-1] << cnt;
                cnt = 1;
            }
        }
        cout << str[str.length()-1] << cnt << "\n";
    }
    else {
        string str; cin >> str;

        for(int i=0; i<str.length(); i+=2) {
            for(int j=0; j<str[i+1]-'0'; j++) cout << str[i];
        }

        cout << "\n";
    }
}
