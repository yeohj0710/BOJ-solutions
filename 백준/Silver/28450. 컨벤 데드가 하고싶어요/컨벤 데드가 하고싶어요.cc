#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N+1, vector<int>(M+1));

    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) cin >> v[i][j];

    int K; cin >> K;

    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) {
            if(i == 1 && j == 1) continue;
            else if(i == 1) v[i][j] += v[i][j-1];
            else if(j == 1) v[i][j] += v[i-1][j];
            else v[i][j] += min(v[i-1][j], v[i][j-1]);
        }

    if(v[N][M] <= K) cout << "YES\n" << v[N][M] << "\n";
    else cout << "NO\n";
}
