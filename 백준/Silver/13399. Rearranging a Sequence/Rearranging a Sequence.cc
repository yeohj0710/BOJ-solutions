#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<bool> v(N+1);
    vector<int> u(M);

    for(int i=M-1; i>=0; i--) cin >> u[i];

    for(int i=0; i<M; i++) {
        if(v[u[i]]) continue;

        cout << u[i] << "\n";
        v[u[i]] = true;
    }

    for(int i=1; i<=N; i++)
        if(!v[i]) cout << i << "\n";
}
