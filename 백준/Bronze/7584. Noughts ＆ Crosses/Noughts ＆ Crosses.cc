#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        char c; cin >> c;
        if(c == '#') break;
        cin.ignore();

        string str; getline(cin, str);

        int L = (str.length()+1)/2;

        if(L == 9) cout << "Draw\n";
        else if(L % 2 == 0) {
            if(c == 'O') cout << "X\n";
            else cout << "O\n";
        }
        else {
            if(c == 'O') cout << "O\n";
            else cout << "X\n";
        }
    }
}
