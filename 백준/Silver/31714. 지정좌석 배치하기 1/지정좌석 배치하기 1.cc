#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    vector<vector<int>> v(N, vector<int>(M));

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> v[i][j];

            v[i][j] += K * (i + 1);
        }

        sort(v[i].begin(), v[i].end());
    }

    bool chk = true;

    for(int i=1; i<N; i++) {
        for(int j=0; j<M; j++)
            if(v[i][j] <= v[i-1][j]) chk = false;
    }

    if(chk) cout << "YES\n";
    else cout << "NO\n";
}
