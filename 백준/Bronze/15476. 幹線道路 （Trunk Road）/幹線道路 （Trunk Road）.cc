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

    int ans = INT_MAX;
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            int sum = 0;
            for(int k=0; k<N; k++)
                for(int l=0; l<M; l++) sum += v[k][l] * min(abs(i - k), abs(j - l));

            ans = min(ans, sum);
        }

    cout << ans << "\n";
}
