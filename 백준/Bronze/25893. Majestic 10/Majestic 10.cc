#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int cnt = 0;

        for(int i=0; i<3; i++) {
            int x; cin >> x;

            cout << x << " ";

            if(x >= 10) cnt++;
        }

        cout << "\n";

        if(cnt == 0) cout << "zilch\n";
        else if(cnt == 1) cout << "double\n";
        else if(cnt == 2) cout << "double-double\n";
        else cout << "triple-double\n";

        cout << "\n";
    }
}
