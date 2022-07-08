#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        bool check = false;
        for(int i=2; i<str.length(); i++) {
            if(str[i-2] == 'l' && str[i-1] == 'o' && str[i] == 'l') check = true;
        }
        if(check) {
            cout << 0 << "\n";
            continue;
        }

        check = false;
        for(int i=1; i<str.length(); i++) {
            if(str[i-1] == 'l' && str[i] == 'o') check = true;
            if(str[i-1] == 'l' && str[i] == 'l') check = true;
            if(str[i-1] == 'o' && str[i] == 'l') check = true;
        }
        if(check) {
            cout << 1 << "\n";
            continue;
        }

        check = false;
        for(int i=2; i<str.length(); i++) {
            if(str[i-2] == 'l' && str[i] == 'l') check = true;
        }
        if(check) {
            cout << 1 << "\n";
            continue;
        }

        check = false;
        for(int i=0; i<str.length(); i++) {
            if(str[i] == 'l' || str[i] == 'o') check = true;
        }
        if(check) {
            cout << 2 << "\n";
            continue;
        }

        cout << 3 << "\n";
    }
}
