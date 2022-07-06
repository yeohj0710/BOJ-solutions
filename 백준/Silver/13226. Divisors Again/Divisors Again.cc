#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        int ans = 0;

        for(int i=a; i<=b; i++) {
            int cnt = 0;
            for(int j=1; j*j<=i; j++) {
                if(i % j == 0) {
                    if(i / j == j) cnt++;
                    else cnt += 2;
                }
            }
            ans = max(ans, cnt);
        }

        cout << ans << "\n";
    }
}
