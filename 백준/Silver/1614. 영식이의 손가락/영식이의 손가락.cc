#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    int ans = 0;

    if(a == 1 || a == 5) {
        ans += b*8;

        if(a == 5) ans += 4;
    }
    else {
        ans += (b/2) * 8;

        int v[8] = {1, 2, 3, 4, 5, 4, 3, 2};

        for(int i=0; i<8; i++) {
            if(v[i] == a) {
                if(b % 2 == 0) break;
                else b--;
            }

            ans++;
        }
    }

    cout << ans << "\n";
}
