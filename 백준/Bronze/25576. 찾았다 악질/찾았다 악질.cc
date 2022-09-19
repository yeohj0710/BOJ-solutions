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

    int cnt = 0;

    for(int i=1; i<N; i++) {
        int sum = 0;

        for(int j=0; j<M; j++) sum += abs(v[0][j] - v[i][j]);

        if(sum > 2000) cnt++;
    }

    if(cnt >= N/2) cout << "YES\n";
    else cout << "NO\n";
}
