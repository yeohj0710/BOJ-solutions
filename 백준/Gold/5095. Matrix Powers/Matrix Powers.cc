#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef vector<vector<int>> mat;
int N, mod, M;

mat f(mat& v, mat& u) {
    mat w(N, vector<int>(N));

    for(int i=0; i<v.size(); i++)
        for(int j=0; j<u[0].size(); j++)
            for(int k=0; k<v[0].size(); k++)
                w[i][j] = (w[i][j] + v[i][k] * u[k][j]) % mod;

    return w;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        cin >> N >> mod >> M;
        if(N == 0 && mod == 0 && M == 0) break;

        mat mul(N, vector<int>(N));
        for(int i=0; i<N; i++) mul[i][i] = 1;

        mat bas(N, vector<int>(N));

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) cin >> bas[i][j];

        while(M > 0) {
            if(M % 2 == 1) mul = f(mul, bas);

            bas = f(bas, bas);
            M /= 2;
        }

        for(int i=0; i<mul.size(); i++) {
            for(int j=0; j<mul[0].size(); j++) cout << mul[i][j] << " ";

            cout << "\n";
        }
        cout << "\n";
    }
}
