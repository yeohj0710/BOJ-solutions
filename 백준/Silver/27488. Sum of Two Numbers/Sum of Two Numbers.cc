#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int x = 0, y = 0, xsum = 0, ysum = 0;

        for(int i=0; i<str.length(); i++) {
            x *= 10, y *= 10;

            int add = str[i] - '0';

            if(add % 2 == 0) x += add / 2, y += add / 2;
            else {
                if(xsum > ysum) x += add / 2, y += add / 2 + 1, ysum++;
                else x += add / 2 + 1, y += add / 2, xsum++;
            }
        }

        cout << x << " " << y << "\n";
    }
}
