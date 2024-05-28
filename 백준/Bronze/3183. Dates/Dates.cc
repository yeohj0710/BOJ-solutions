#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int d, m, y; cin >> d >> m >> y;

        if(d == 0 && m == 0 && y == 0) break;

        if(d < 1 || d > 31 || m < 1 || m > 12) {
            cout << "Invalid\n";
            continue;
        }

        if(m == 2) {
            bool chk = true;

            if(d > 29) chk = false;
            else if(d == 29 && (y % 4 != 0 || (y % 100 == 0 && y % 400 != 0))) chk = false;

            if(chk) cout << "Valid\n";
            else cout << "Invalid\n";

            continue;
        }

        bool chk = true;

        if((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) chk = false;

        if(chk) cout << "Valid\n";
        else cout << "Invalid\n";
    }
}
