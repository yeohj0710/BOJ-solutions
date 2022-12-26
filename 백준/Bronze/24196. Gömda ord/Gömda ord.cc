#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    string str; cin >> str;

    int i = 0;

    while(i < str.length()) {
        cout << str[i];

        i += str[i] - 'A' + 1;
    }

    cout << "\n";
}
