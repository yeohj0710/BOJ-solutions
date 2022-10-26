#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        int ans = 5625, mod = 9973;

        for(int i=0; i<N-4; i++)
            ans = (ans * 10) % mod;

        cout << ans << "\n";
    }
}
