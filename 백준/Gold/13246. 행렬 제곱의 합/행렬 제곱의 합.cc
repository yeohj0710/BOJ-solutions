#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef vector<vector<int>> mat;

int N, K, mod = 1e3;

mat mul(mat v, mat u) {
    mat w(N, vector<int>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            for(int k=0; k<N; k++) w[i][j] += v[i][k] * u[k][j];

            w[i][j] %= mod;
        }

    return w;
}

mat fpow(mat ba, int K) {
    mat v(N, vector<int>(N));

    for(int i=0; i<N; i++) v[i][i] = 1;

    while(K > 0) {
        if(K % 2 == 1) v = mul(v, ba);

        ba = mul(ba, ba);
        K /= 2;
    }

    return v;
}

mat f(mat ba, int K) {
    if(K == 1) return ba;

    if(K % 2 == 0) {
        mat v = f(ba, K/2);
        mat u = fpow(ba, K/2);

        for(int i=0; i<N; i++) u[i][i] = (u[i][i] + 1) % mod;

        mat w = mul(v, u);

        return w;
    }

    if(K % 2 == 1) {
        mat v = f(ba, K-1);
        mat u = fpow(ba, K);

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                v[i][j] = (v[i][j] + u[i][j]) % mod;

        return v;
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> K;

    mat v(N, vector<int>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            cin >> v[i][j];

            v[i][j] = ((v[i][j] % mod) + mod) % mod;
        }

    mat ans = f(v, K);

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) cout << ans[i][j] << " ";

        cout << "\n";
    }
}
