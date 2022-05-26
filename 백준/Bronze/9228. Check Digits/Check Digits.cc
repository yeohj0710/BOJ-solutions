#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; cin >> str;
        if(str == "#") break;

        int x = 0;

        for(int i=str.length()-1; i>=0; i--) {
            x += (str[i] - '0') * (2 + (str.length() - 1 - i));
        }

        x = x % 11;

        x = 11 - x;

        if(x == 11) cout << str << " -> " << 0 << "\n";
        else if(x == 10) cout << str << " -> Rejected\n";
        else cout << str << " -> " << x << "\n";
    }
}
