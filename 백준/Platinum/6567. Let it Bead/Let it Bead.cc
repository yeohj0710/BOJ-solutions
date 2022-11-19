#include <bits/stdc++.h>
#define int long long
using namespace std;

// referred to the solution

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, M; cin >> M >> N;
        if(N == 0 && M == 0) break;

        int ans = 0;

        for(int i=1; i<=N; i++) ans += pow(M, __gcd(N, i));

        if(N % 2 == 0) ans += (N / 2) * (pow(M, N/2) + pow(M, N/2 + 1));
        else ans += N * pow(M, (N + 1)/2);

        ans /= (N * 2);

        cout << ans << "\n";
    }
}
