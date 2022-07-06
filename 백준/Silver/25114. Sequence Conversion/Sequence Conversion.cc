#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N), u(N);
    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<N; i++) cin >> u[i];

    int ans = 0;
    for(int i=0; i<N-1; i++) {
        if(v[i] != u[i]) {
            v[i+1] = v[i+1] ^ (v[i] ^ u[i]);
            v[i] = v[i] ^ (v[i] ^ u[i]);
            ans++;
        }
    }

    if(v[N-1] == u[N-1]) cout << ans << "\n";
    else cout << -1 << "\n";
}
