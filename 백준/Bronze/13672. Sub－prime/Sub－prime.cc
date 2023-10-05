#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int N, M; cin >> N >> M;

        if(N == 0 && M == 0) break;

        vector<int> v(N+1);
        for(int i=1; i<=N; i++) cin >> v[i];

        while(M--) {
            int a, b, c; cin >> a >> b >> c;

            v[a] -= c, v[b] += c;
        }

        bool chk = true;

        for(int i=1; i<=N; i++)
            if(v[i] < 0) chk = false;

        if(chk) cout << "S\n";
        else cout << "N\n";
    }
}
