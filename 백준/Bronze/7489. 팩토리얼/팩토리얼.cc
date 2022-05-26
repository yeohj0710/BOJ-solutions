#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        int ans = 1;

        for(int i=1; i<=N; i++) {
            ans *= i;

            while(ans % 10 == 0) ans /= 10;

            ans %= (int)(1e9);
        }

        cout << ans % 10 << "\n";
    }
}
