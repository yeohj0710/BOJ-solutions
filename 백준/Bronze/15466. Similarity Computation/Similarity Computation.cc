#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        vector<int> v(N), u(M);

        for(int i=0; i<N; i++) cin >> v[i];
        for(int i=0; i<M; i++) cin >> u[i];

        int cnt = 0;

        for(int i=0; i<N; i++) {
            bool check = false;
            for(int j=0; j<M; j++)
                if(u[j] == v[i]) check = true;
            if(check) cnt++;
        }

        if((double)cnt/(N + M - cnt) > 0.5) cout << 1 << "\n";
        else cout << 0 << "\n";
    }
}
