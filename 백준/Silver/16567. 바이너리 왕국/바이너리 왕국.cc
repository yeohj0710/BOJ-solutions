#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);
    int ans = 0;

    for(int i=1; i<=N; i++) {
        cin >> v[i];

        if(v[i] == 1 && v[i-1] == 0) ans++;
    }

    while(M--) {
        int Q; cin >> Q;

        if(Q == 0) cout << ans << "\n";
        else if(Q == 1) {
            int x; cin >> x;

            if(v[x] == 0) {
                if(v[x-1] == 1 && v[x+1] == 1) ans--;
                else if(v[x-1] == 0 && v[x+1] == 0) ans++;
            }

            v[x] = 1;
        }
    }
}
