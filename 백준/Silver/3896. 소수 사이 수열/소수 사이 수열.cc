#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 1299710;

    vector<bool> prime(Max, true);
    prime[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) prime[i*j] = false;

    int T; cin >> T;

    while(T--) {
        int x; cin >> x;

        if(prime[x]) {
            cout << 0 << "\n";
            continue;
        }

        int ans = 0;

        int y = x;
        while(!prime[y--]) ans++;

        y = x;
        while(!prime[y++]) ans++;

        cout << ans << "\n";
    }
}
