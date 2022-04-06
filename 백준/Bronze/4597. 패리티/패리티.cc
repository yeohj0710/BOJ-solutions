#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; cin >> str;

        if(str == "#") break;

        int cnt = 0;
        for(int i=0; i<str.length()-1; i++)
            if(str[i] == '1') cnt++;

        if(str[str.length()-1] == 'e') {
            if(cnt % 2 == 0) str[str.length()-1] = '0';
            else str[str.length()-1] = '1';
        }
        else {
            if(cnt % 2 == 0) str[str.length()-1] = '1';
            else str[str.length()-1] = '0';
        }

        cout << str << "\n";
    }
}
