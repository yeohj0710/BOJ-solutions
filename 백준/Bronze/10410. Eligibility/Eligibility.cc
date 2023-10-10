#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        string a, b, c; cin >> a >> b >> c;

        cout << a << " ";

        int x = stoll(b.substr(0, 4));
        int y = stoll(c.substr(0, 4));
        int z; cin >> z;

        if(x >= 2010 || y >= 1991) cout << "eligible\n";
        else if(z >= 41) cout << "ineligible\n";
        else cout << "coach petitions\n";
    }
}
