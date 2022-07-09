#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    if(str.length() == 2) cout << (str[0] - '0' + str[1] - '0') << "\n";
    else if(str.length() == 3) {
        if(str[1] == '0') cout << 10 + (str[2] - '0') << "\n";
        else if(str[2] == '0') cout << (str[0] - '0') + 10 << "\n";
    }
    else if(str.length() == 4) cout << 20 << "\n";
}
