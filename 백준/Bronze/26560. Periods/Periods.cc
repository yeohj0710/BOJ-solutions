#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T; cin.ignore();

    while(T--) {
        string str; getline(cin, str);

        if(str.back() != '.') str += '.';

        cout << str << "\n";
    }
}
