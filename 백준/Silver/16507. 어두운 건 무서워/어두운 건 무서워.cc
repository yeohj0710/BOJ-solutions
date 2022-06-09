#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<vector<int>> v(N+1, vector<int>(M+1));

    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) {
            int x; cin >> x;
            v[i][j] = v[i-1][j] + v[i][j-1] - v[i-1][j-1] + x;
        }

    while(K--) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

        cout << (v[x2][y2] - v[x1-1][y2] - v[x2][y1-1] + v[x1-1][y1-1])
                 / ((x2 - x1 + 1) * (y2 - y1 + 1)) << "\n";
    }
}
