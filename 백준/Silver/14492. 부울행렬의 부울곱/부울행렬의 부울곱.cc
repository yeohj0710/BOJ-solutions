#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<int>> v(N, vector<int>(N));
    vector<vector<int>> u(v), w(v);

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> v[i][j];

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> u[i][j];

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            for(int k=0; k<N; k++) w[i][j] += v[i][k] * u[k][j];

    int ans = 0;
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            if(w[i][j] > 0) ans++;

    cout << ans << "\n";
}
