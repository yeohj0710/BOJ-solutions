#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    for(int i=0; i<str.length(); i++) {
        if((str.length() - i) % 3 == 0 && i != 0) cout << ",";
        cout << str[i];
    }
}
