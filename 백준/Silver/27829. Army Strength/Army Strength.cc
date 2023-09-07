#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        vector<int> v(N), u(M);

        for(int i=0; i<N; i++) cin >> v[i];
        for(int i=0; i<M; i++) cin >> u[i];

        sort(v.begin(), v.end());
        sort(u.begin(), u.end());

        int i = 0, j = 0;

        while(i < N && j < M) {
            if(v[i] < u[j]) i++;
            else j++;
        }

        if(i == N) cout << "MechaGodzilla\n";
        else cout << "Godzilla\n";
    }
}
