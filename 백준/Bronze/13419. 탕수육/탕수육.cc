#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        if(str.length() % 2 == 0) {
            for(int i=0; i<str.length(); i+=2) cout << str[i];
            cout << "\n";
            for(int i=1; i<str.length(); i+=2) cout << str[i];
            cout << "\n";
        }
        else {
            for(int i=0; i<str.length(); i+=2) cout << str[i];
            for(int i=1; i<str.length(); i+=2) cout << str[i];
            cout << "\n";
            for(int i=1; i<str.length(); i+=2) cout << str[i];
            for(int i=0; i<str.length(); i+=2) cout << str[i];
            cout << "\n";
        }
    }
}
