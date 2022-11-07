#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int x;

    for(int i=0; i<N*M; i++) cin >> x;

    for(int i=0; i<N; i++) cin >> x;

    int ans = 1, mod = 998244353;

    for(int i=N+1; i<=N*M; i++) ans = (ans * i) % mod;

    cout << ans << "\n";
}
