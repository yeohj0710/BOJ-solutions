#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str, key;
    getline(cin, str); cin >> key;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' ') {
            cout << " ";
            continue;
        }

        int x = i % key.length();
        cout << char(((str[i] - 'a') - (key[x] - 'a' + 1) + 26)%26 + 'a');
    }
}
