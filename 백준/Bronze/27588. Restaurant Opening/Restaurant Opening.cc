#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N, vector<int>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    int ans = INT_MAX;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            int sum = 0;

            for(int k=0; k<N; k++)
                for(int l=0; l<M; l++) sum += v[k][l] * (abs(i-k) + abs(j-l));

            ans = min(ans, sum);
        }

    cout << ans << "\n";
}
