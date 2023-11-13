#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int N, M; cin >> N >> M;

        if(N == 0 && M == 0) break;

        vector<bool> v(N+1);
        v[M] = true;

        for(int i=0; i<N-2; i++) {
            int x; cin >> x;

            v[x] = true;
        }

        for(int i=1; i<=N; i++)
            if(!v[i]) cout << i << "\n";
    }
}
