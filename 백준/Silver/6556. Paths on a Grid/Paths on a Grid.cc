#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        N += M;

        M = min(M, N - M);

        int ans = 1;

        for(int i=1; i<=M; i++) {
            ans *= N;
            ans /= i;

            N--;
        }

        cout << ans << "\n";
    }
}
