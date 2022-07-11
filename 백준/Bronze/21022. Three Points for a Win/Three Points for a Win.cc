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
    for(int i=0; i<N; i++) {
        if(v[i] > u[i]) ans += 3;
        else if(v[i] == u[i]) ans++;
    }

    cout << ans << "\n";
}
