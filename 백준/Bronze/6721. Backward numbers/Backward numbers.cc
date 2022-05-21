#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string a, b; cin >> a >> b;

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        int c = stoll(a) + stoll(b);

        string d = to_string(c);

        reverse(d.begin(), d.end());

        int i = 0;
        while(d[i] == '0') i++;

        string e = d.substr(i, d.length()-i);

        if(e.length() != 0) cout << e << "\n";
        else cout << 0 << "\n";
    }
}
