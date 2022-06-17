#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K, W; cin >> N >> M >> K >> W;

    vector<vector<int>> v(N, vector<int>(M));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    for(int i=0; i<N-W+1; i++) {
        for(int j=0; j<M-W+1; j++) {
            vector<int> u;
            for(int k=i; k<i+W; k++)
                for(int l=j; l<j+W; l++) u.push_back(v[k][l]);

            sort(u.begin(), u.end());

            cout << u[W*W/2] << " ";
        }
        cout << "\n";
    }
}
