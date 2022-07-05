#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int a, b, c; cin >> a >> b >> c;

        int ans = 0;
        for(int i=0; i<a; i++)
            for(int j=0; j<b; j++)
                if((i & j) < c) ans++;

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
