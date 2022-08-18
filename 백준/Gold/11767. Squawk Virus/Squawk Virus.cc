#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef vector<vector<int>> mat;
int N, M, K, ex;

mat f(mat& v, mat& u) {
    mat w(N, vector<int>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            for(int k=0; k<N; k++) w[i][j] += v[i][k] * u[k][j];

    return w;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M >> K >> ex;

    mat ba(N, vector<int>(N));

    while(M--) {
        int a, b; cin >> a >> b;

        ba[a][b] = ba[b][a] = 1;
    }

    mat v(N, vector<int>(N));
    for(int i=0; i<N; i++) v[i][i] = 1;

    while(ex > 0) {
        if(ex % 2 == 1) v = f(v, ba);

        ba = f(ba, ba);
        ex /= 2;
    }

    int ans = 0;

    for(int i=0; i<N; i++) ans += v[K][i];

    cout << ans << "\n";
}
