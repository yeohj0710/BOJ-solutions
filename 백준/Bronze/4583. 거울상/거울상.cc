#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; getline(cin, str);

        if(str == "#") break;

        bool check = true;
        for(int i=0; i<str.length(); i++)
            if(!(str[i] == 'b' || str[i] == 'd'
               || str[i] == 'p' || str[i] == 'q'
               || str[i] == 'i' || str[i] == 'o'
               || str[i] == 'v' || str[i] == 'w'
               || str[i] == 'x')) check = false;

        if(!check) {
            cout << "INVALID\n";
            continue;
        }

        for(int i=str.length()-1; i>=0; i--) {
            if(str[i] == 'b') cout << "d";
            else if(str[i] == 'd') cout << "b";
            else if(str[i] == 'p') cout << "q";
            else if(str[i] == 'q') cout << "p";
            else if(str[i] == 'i' || str[i] == 'o'
               || str[i] == 'v' || str[i] == 'w'
               || str[i] == 'x') cout << str[i];
        }
        cout << "\n";
    }
}
