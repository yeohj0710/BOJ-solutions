#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int a = 0, b = 0;

        char c; cin >> c;
        if(c == '#') break;
        else {
            if(c == 'A') a++;
            else if((c - '0') % 2 == 0) b++;
            else a++;
        }

        while(true) {
            char c; cin >> c;
            if(c == '*') break;

            if(c == 'A') a++;
            else if((c - '0') % 2 == 0) b++;
            else a++;
        }

        if(a > b) cout << "Cheryl\n";
        else if(a < b) cout << "Tania\n";
        else cout << "Draw\n";
    }
}
