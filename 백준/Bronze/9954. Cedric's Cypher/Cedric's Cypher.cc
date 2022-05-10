#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; getline(cin, str);
        if(str == "#") break;

        for(int i=0; i<str.length()-1; i++) {
            if(str[i] >= 'A' && str[i] <= 'Z') {
                int x = str[i] + ('A' - str[str.length()-1]);

                if(x >= 'A' && x <= 'Z') cout << char(x);
                else cout << char(x + 26);
            }
            else if(str[i] >= 'a' && str[i] <= 'z') {
                int x = str[i] + ('A' - str[str.length()-1]);

                if(x >= 'a' && x <= 'z') cout << char(x);
                else cout << char(x + 26);
            }
            else cout << str[i];
        }

        cout << "\n";
    }
}
