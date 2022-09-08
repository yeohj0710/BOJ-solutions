#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
        if(a == 0 && b == 0 && c == 0 && d == 0 && e == 0) break;

        int ans = 0;

        for(int i=0; i<=a/100; i++)
            for(int j=0; j<=min(a/125, b/50); j++)
                for(int k=0; k<=min(a/50, b/100); k++) {
                    if(i*100 + j*125 + k*50 > a) continue;
                    if(j*50 + k*100 > b) continue;

                    ans = max(ans, i*c + j*d + k*e);
                }

        cout << ans << "\n";
    }
}
