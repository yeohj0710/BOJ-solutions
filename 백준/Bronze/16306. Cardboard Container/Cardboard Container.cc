#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = INT_MAX;

    for(int i=1; i<=N; i++) {
        if(N % i != 0) continue;

        int jk = N / i;

        for(int j=1; j<=jk; j++) {
            if(jk % j != 0) continue;

            int k = jk / j;

            ans = min(ans, (i*j + j*k + k*i)*2);
        }
    }

    cout << ans << "\n";
}
