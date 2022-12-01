#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<int>> v(N+1, vector<int>(8));

    v[0][7] = 1;

    for(int i=1; i<=N; i++) {
        v[i][0] = v[i-1][7];
        v[i][1] = v[i-1][6];
        v[i][2] = v[i-1][5];
        v[i][3] = v[i-1][4];
        v[i][4] = v[i-1][3] + v[i-1][7];
        v[i][5] = v[i-1][2];
        v[i][6] = v[i-1][1] + v[i-1][7];
        v[i][7] = v[i-1][0] + v[i-1][4] + v[i-1][6];

        for(int j=0; j<8; j++) v[i][j] %= (int)(1e9 + 7);
    }

    cout << v[N][7] << "\n";
}
