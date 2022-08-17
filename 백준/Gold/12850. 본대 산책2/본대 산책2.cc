#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef vector<vector<int>> mat;
int N = 8, ex, mod = 1e9 + 7;

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

    cin >> ex;

    mat v(N, vector<int>(N));
    for(int i=0; i<N; i++) v[i][i] = 1;

    mat ba(N, vector<int>(N));

    ba = {{0, 1, 1, 0, 0, 0, 0, 0},
          {1, 0, 1, 1, 0, 0, 0, 0},
          {1, 1, 0, 1, 1, 0, 0, 0},
          {0, 1, 1, 0, 1, 1, 0, 0},
          {0, 0, 1, 1, 0, 1, 0, 1},
          {0, 0, 0, 1, 1, 0, 1, 0},
          {0, 0, 0, 0, 0, 1, 0, 1},
          {0, 0, 0, 0, 1, 0, 1, 0}};

    while(ex > 0) {
        if(ex % 2 == 1) v = f(v, ba);

        ba = f(ba, ba);
        ex /= 2;
    }

    cout << v[0][0] << "\n";
}
