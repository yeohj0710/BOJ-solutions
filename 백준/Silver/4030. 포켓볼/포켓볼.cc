#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        int a, b; cin >> a >> b;
        if(a == 0 && b == 0) break;

        int ans = 0;
        for(int i=1; i*i<b; i++) {
            if(i*i <= a) continue;

            int l = 1, r = 1e9;
            bool check = false;

            while(l <= r) {
                int m = (l + r)/2;

                if(m*(m+1)/2 == i*i - 1) {
                    check = true;
                    break;
                }

                if(m*(m+1)/2 < i*i - 1) l = m + 1;
                else r = m - 1;
            }

            if(check) ans++;
        }

        cout << "Case " << t << ": " << ans << "\n";
    }
}
