#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> u(N), v(M);
    for(int i=0; i<N; i++) cin >> u[i];
    for(int i=0; i<M; i++) cin >> v[i];

    int ans = 0;
    for(int i=0; i<N; i++) {
        bool check = false;
        for(int j=0; j<M; j++)
            if(v[j] == u[i]) check = true;

        if(check) ans++;
    }

    cout << ans << "\n";
}
