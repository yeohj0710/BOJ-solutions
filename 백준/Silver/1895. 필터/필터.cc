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

    int K; cin >> K;

    int ans = 0;
    for(int i=0; i<N-2; i++)
        for(int j=0; j<M-2; j++) {
            vector<int> u;
            for(int k=0; k<3; k++)
                for(int l=0; l<3; l++) u.push_back(v[i+k][j+l]);

            sort(u.begin(), u.end());

            if(u[4] >= K) ans++;
        }

    cout << ans << "\n";
}
