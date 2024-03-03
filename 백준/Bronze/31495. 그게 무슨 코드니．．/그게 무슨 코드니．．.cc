#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; getline(cin, str);

    if(str.length() <= 2 || str[0] != '\"' || str[str.length() - 1] != '\"') {
        cout << "CE\n";
        return 0;
    }

    cout << str.substr(1, str.length() - 2) << "\n";
}
