#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int a, b; cin >> a >> b;
        if(a == 0 && b == 0) break;

        int Max = 0, ans;

        for(int i=a; i<=b; i++) {
            int cnt = 0;

            for(int j=1; j<=i; j++) {
                if(i % j == 0) cnt++;
            }

            if(cnt >= Max) {
                Max = cnt;
                ans = i;
            }
        }

        cout << ans << " " << Max << "\n";
    }
}
