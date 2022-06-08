#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N, vector<int>(M));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    int ans = 0;
    for(int i=0; i<N; i++)
        for(int j=0; j<M-1; j++)
            if(v[i][j] == v[i][j+1]) ans = max(ans, v[i][j]);
    for(int i=0; i<N-1; i++)
        for(int j=0; j<M-1; j++)
            if(v[i][j] == v[i+1][j]) ans = max(ans, v[i][j]);
    for(int i=0; i<N-1; i++)
        for(int j=0; j<M-1; j++)
            if(v[i][j] == v[i+1][j+1]) ans = max(ans, v[i][j]);
    for(int i=0; i<N-1; i++)
        for(int j=1; j<M; j++)
            if(v[i][j] == v[i+1][j-1]) ans = max(ans, v[i][j]);

    cout << ans << "\n";
}
