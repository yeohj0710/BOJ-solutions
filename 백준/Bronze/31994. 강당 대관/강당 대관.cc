#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string s; int mx = 0;

    for(int i=0; i<7; i++) {
        string ss; int x; cin >> ss >> x;

        if(x > mx) {
            mx = x;
            s = ss;
        }
    }

    cout << s << "\n";
}
