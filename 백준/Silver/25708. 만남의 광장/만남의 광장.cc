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

    vector<int> u(N), w(M);

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) u[i] += v[i][j];

    for(int i=0; i<M; i++)
        for(int j=0; j<N; j++) w[i] += v[j][i];

    int ans = INT_MIN;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            for(int k=i+1; k<N; k++)
                for(int l=j+1; l<M; l++) {
                    int sum = u[i] + w[j] + u[k] + w[l]
                              - v[i][j] - v[k][l] - v[i][l] - v[k][j]
                              + (k-i-1) * (l-j-1);

                    ans = max(ans, sum);
                }

    cout << ans << "\n";
}
