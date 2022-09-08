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

    for(int i=0; i<M; i++)
        for(int j=i+1; j<M; j++)
            for(int k=j+1; k<M; k++) {
                int sum = 0;

                for(int l=0; l<N; l++)
                    sum += max(max(v[l][i], v[l][j]), v[l][k]);

                ans = max(ans, sum);
            }

    cout << ans << "\n";
}
