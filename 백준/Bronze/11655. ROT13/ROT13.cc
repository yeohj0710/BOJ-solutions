#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; getline(cin, str);

    for(int i=0; i<str.length(); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z')
            cout << char((str[i] - 'A' + 13) % 26 + 'A');
        else if(str[i] >= 'a' && str[i] <= 'z')
            cout << char((str[i] - 'a' + 13) % 26 + 'a');
        else cout << str[i];
    }
}
