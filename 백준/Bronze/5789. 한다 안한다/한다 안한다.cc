#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int L = str.length();
        cout << "Do-it";
        if(str[L/2 - 1] != str[L/2]) cout << "-Not";
        cout << "\n";
    }
}
