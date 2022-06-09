#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<string> v(N), u(N);
    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<N; i++) cin >> u[i];

    int ans = 0;
    for(int i=0; i<M; i++) {
        bool check = true;
        for(int j=0; j<N; j++)
            for(int k=0; k<N; k++)
                if(v[j][i] == u[k][i]) check = false;

        if(check) ans++;
    }

    cout << ans << "\n";
}
