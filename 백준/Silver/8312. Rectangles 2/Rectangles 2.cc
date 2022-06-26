#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    int ans = 0;
    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) {
            if((i + j) * 2 < K) continue;

            ans += (N - i + 1) * (M - j + 1);
        }

    cout << ans << "\n";
}
