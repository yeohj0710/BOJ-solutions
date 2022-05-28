#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        int ans = 0;

        while(N--) {
            double x, y; cin >> x >> y;

            double d = x*x + y*y;

            if(d <= 20*20) ans += 11 - 20/20;
            else if(d <= 40*40) ans += 11 - 40/20;
            else if(d <= 60*60) ans += 11 - 60/20;
            else if(d <= 80*80) ans += 11 - 80/20;
            else if(d <= 100*100) ans += 11 - 100/20;
            else if(d <= 120*120) ans += 11 - 120/20;
            else if(d <= 140*140) ans += 11 - 140/20;
            else if(d <= 160*160) ans += 11 - 160/20;
            else if(d <= 180*180) ans += 11 - 180/20;
            else if(d <= 200*200) ans += 11 - 200/20;
        }

        cout << ans << "\n";
    }
}
