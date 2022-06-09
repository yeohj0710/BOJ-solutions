#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(M);
    for(int i=0; i<M; i++) cin >> v[i];

    vector<vector<int>> u(N, vector<int>(N));
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> u[i][j];

    int ans = 0;
    for(int i=0; i<M-1; i++) ans += u[v[i]-1][v[i+1]-1];

    cout << ans << "\n";
}
