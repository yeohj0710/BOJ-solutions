#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        bool check = true;

        for(int i=1; i<str.length(); i++)
            if(str[i] == str[i-1]) check = false;

        if(!check) {
            cout << "No\n";
            continue;
        }

        check = true;

        for(int i=0; i<str.length(); i+=2)
            if(str[i] == 'R') check = false;
        for(int i=1; i<str.length(); i+=2)
            if(str[i] == 'L') check = false;

        if(check) {
            cout << "Yes\n";
            continue;
        }

        check = true;

        for(int i=0; i<str.length(); i+=2)
            if(str[i] == 'L') check = false;
        for(int i=1; i<str.length(); i+=2)
            if(str[i] == 'R') check = false;

        if(check) {
            cout << "Yes\n";
            continue;
        }

        cout << "No\n";
    }
}
