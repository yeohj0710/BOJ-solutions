#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int a, b, c; cin >> a >> b >> c;

        a *= 100;
        b *= 100;
        c *= 100;

        int sum = a*15/100 + b*20/100 + c*25/100;

        int temp = (9000 - sum) * 10 / 4;

        int ans = temp / 100;

        if(temp % 100 != 0) ans++;

        if(ans >= 0 && ans <= 100) cout << ans << "\n";
        else if(ans < 0) cout << 0 << "\n";
        else cout << "impossible\n";
    }
}
