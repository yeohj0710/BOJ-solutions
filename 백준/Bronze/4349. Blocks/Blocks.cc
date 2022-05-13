#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        int ans = INT_MAX;
        for(int i=1; i<=N; i++)
            for(int j=i; j<=N; j++) {
                if(i * j * (N / (i * j)) != N) continue;

                int k = N / (i * j);

                if(i * j * k == N) ans = min(ans, (i*j + j*k + k*i) * 2);
            }

        cout << ans << "\n";
    }
}
