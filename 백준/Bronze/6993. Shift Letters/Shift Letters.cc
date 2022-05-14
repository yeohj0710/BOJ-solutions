#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;
        int x; cin >> x;

        string temp = str.substr(str.length() - x, x) + str.substr(0, str.length() - x);

        cout << "Shifting " << str << " by " << x << " positions gives us: " << temp << "\n";
    }
}
