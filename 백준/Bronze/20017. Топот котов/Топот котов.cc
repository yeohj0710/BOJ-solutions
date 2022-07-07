#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<vector<int>> v(N, vector<int>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    int cnt = 0;
    for(int i=0; i<N-1; i++)
        for(int j=0; j<M; j++)
            if(v[i][j]*2 < v[i+1][j]) cnt++;

    int ans = cnt * K;
    cout << ans << "\n";
}
