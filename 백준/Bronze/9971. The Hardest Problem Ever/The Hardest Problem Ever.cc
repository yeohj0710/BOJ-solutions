#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; getline(cin, str);

        if(str == "ENDOFINPUT") break;

        getline(cin, str);
        for(int i=0; i<str.length(); i++) {
            if(str[i] >= 'A' && str[i] <= 'Z') cout << char((str[i] - 'A' - 5 + 26)%26 + 'A');
            else cout << str[i];
        }
        cout << "\n";

        getline(cin, str);
    }
}
