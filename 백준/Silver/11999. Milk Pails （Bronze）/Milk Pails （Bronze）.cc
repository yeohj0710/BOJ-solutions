#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    int ans = 0;

    for(int i=0; i*N<=K; i++) {
        ans = max(ans, i*N + ((K - i*N)/M)*M);
    }

    cout << ans << "\n";
}
