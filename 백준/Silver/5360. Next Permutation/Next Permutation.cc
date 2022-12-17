#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        if(next_permutation(str.begin(), str.end())) cout << str << "\n";
        else cout << "USELESS\n";
    }
}
