#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; getline(cin, str);
        if(str == "*") break;

        if(str[0] >= 'A' && str[0] <= 'Z') str[0] = char(str[0] - 'A' + 'a');

        bool check = true;
        for(int i=0; i<str.length()-1; i++) {
            if(!(str[i] == ' ' && str[i+1] != ' ')) continue;

            if(!(str[i+1] == str[0] || str[i+1] == char(str[0] - 'a' + 'A'))) check = false;
        }

        if(check) cout << "Y\n";
        else cout << "N\n";
    }
}
