#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        int ans = INT_MAX;

        for(int i=0; i*i*i<=N; i++)
            for(int j=0; i*i*i+j*j<=N; j++) {
                int k = N - i*i*i - j*j;
                ans = min(ans, i+j+k);
            }

        cout << ans << "\n";
    }
}
