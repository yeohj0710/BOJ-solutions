#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    while(true) {
        int a, b, c; cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) break;

        double ans = 0;

        for(int i=1; i<1000; i++)
            for(int j=1; j<1000; j++)
                if(round(i * (100 + a) / 100) + round(j * (100 + a) / 100) == c)
                    ans = max(ans, round(i * (100 + b) / 100) + round(j * (100 + b) / 100));

        cout << ans << "\n";
    }
}
