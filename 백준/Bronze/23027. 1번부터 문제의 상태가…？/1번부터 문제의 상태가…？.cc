#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    if(str.find('A') < str.length()) {
        for(int i=0; i<str.length(); i++) {
            if(str[i] == 'B' || str[i] == 'C' || str[i] == 'D' || str[i] == 'F') str[i] = 'A';
        }
    }
    else if(str.find('B') < str.length()) {
        for(int i=0; i<str.length(); i++) {
            if(str[i] == 'C' || str[i] == 'D' || str[i] == 'F') str[i] = 'B';
        }
    }
    else if(str.find('C') < str.length()) {
        for(int i=0; i<str.length(); i++) {
            if(str[i] == 'D' || str[i] == 'F') str[i] = 'C';
        }
    }
    else {
        for(int i=0; i<str.length(); i++) str[i] = 'A';
    }

    cout << str << "\n";
}
