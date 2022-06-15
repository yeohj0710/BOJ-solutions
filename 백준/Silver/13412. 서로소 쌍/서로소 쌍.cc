#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        if(N == 1) {
            cout << 1 << "\n";
            continue;
        }

        int ans = 0;
        for(int i=1; i*i<N; i++)
            if(N % i == 0 && __gcd(i, N/i) == 1) ans++;

        cout << ans << "\n";
    }
}
