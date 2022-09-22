#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    if(str == "0") {
        cout << 1 << "\n";
        return 0;
    }

    while(str.length() < 2) str = '0' + str;

    int N = (str[str.length()-2] - '0') * 10 + str[str.length()-1] - '0';

    if(N % 4 == 0) cout << 6 << "\n";
    else if(N % 4 == 1) cout << 2 << "\n";
    else if(N % 4 == 2) cout << 4 << "\n";
    else if(N % 4 == 3) cout << 8 << "\n";
}
