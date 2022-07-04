#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        v[i] = v[i-1] ^ x;
    }


    int ans = 0;
    while(M--) {
        int a, b; cin >> a >> b;

        ans ^= (v[b] ^ v[a-1]);
    }

    cout << ans << "\n";
}
