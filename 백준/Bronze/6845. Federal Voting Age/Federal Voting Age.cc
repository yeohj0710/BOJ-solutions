#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        int a, b, c; cin >> a >> b >> c;

        bool check = false;

        if(a < 1989) check = true;
        else if(a == 1989) {
            if(b < 2) check = true;
            else if(b == 2 && c <= 27) check = true;
        }

        if(check) cout << "Yes\n";
        else cout << "No\n";
    }
}
