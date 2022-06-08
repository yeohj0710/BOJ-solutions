#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    if(str.length() == 1) cout << str << "\n";
    else {
        if(str[1] <= '4') {
            cout << str[0];
            for(int i=0; i<str.length()-1; i++) cout << 0;
            cout << "\n";
        }
        else {
            if(str[0] == '9') {
                cout << 10;
                for(int i=0; i<str.length()-1; i++) cout << 0;
                cout << "\n";
            }
            else {
                cout << char(str[0] + 1);
                for(int i=0; i<str.length()-1; i++) cout << 0;
                cout << "\n";
            }
        }
    }
}
