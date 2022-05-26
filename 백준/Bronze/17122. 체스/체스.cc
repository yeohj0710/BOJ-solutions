#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        char a, b; cin >> a >> b;

        int y; cin >> y;

        int x = (b - '0' - 1) * 8 + (a - 'A' + 1);

        int r[8] = {1, 3, 5, 7, 10, 12, 14, 0};

        bool b1 = false, b2 = false;

        for(int i=0; i<8; i++) {
            if(x % 16 == r[i]) b1 = true;
            if(y % 16 == r[i]) b2 = true;
        }

        if(b1 == b2) cout << "YES\n";
        else cout << "NO\n";
    }
}
