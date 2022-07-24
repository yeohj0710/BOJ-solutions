#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string a, b; cin >> a >> b;

        for(int i=10; i<=15000; i++) {
            int x = (a[0] - '0')*i*i + (a[1] - '0')*i + (a[2] - '0');

            int l = 10, r = 15000;

            while(l <= r) {
                int m = (l + r)/2;

                int y = (b[0] - '0')*m*m + (b[1] - '0')*m + (b[2] - '0');

                if(y == x) {
                    cout << i << " " << m << "\n";
                    break;
                }

                if(y < x) l = m + 1;
                else r = m - 1;
            }
        }
    }
}
