#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef vector<vector<int>> mat;
int N, ex, mod = 1e8 + 7;

mat f(mat& v, mat& u) {
    mat w(N, vector<int>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            for(int k=0; k<N; k++)
                w[i][j] = (w[i][j] + v[i][k] * u[k][j]) % mod;

    return w;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        cin >> N >> ex;

        N++;

        mat ba(N, vector<int>(N));

        ba[0][0]++;
        ba[0][N-1]++;

        for(int i=1; i<N; i++) ba[i][i-1]++;

        mat v(N, vector<int>(N));
        for(int i=0; i<N; i++) v[i][i] = 1;

        while(ex > 0) {
            if(ex % 2 == 1) v = f(v, ba);

            ba = f(ba, ba);
            ex /= 2;
        }

        cout << v[0][0] << "\n";
    }
}
