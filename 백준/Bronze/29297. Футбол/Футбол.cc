#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int a = str[0] - '0', b = str[2] - '0';

        int x = 0, y = 0;

        for(int i=0; i<=9; i++)
            for(int j=0; j<=9; j++) {
                if(a + i > b + j) x++;
                else if(a + i < b + j) y++;
                else {
                    if(i > b) x++;
                    else if(i < b) y++;
                }
            }

        cout << x << " " << y << "\n";
    }
}
