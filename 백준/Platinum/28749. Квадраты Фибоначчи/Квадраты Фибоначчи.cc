#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef vector<vector<int>> mat;
int mod = 998244353;

mat f(mat& v, mat& u) {
    int N = 2;
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

    int M; cin >> M;

    M++;

    vector<int> v(2);

    for(int t=0; t<2; t++) {
        int N = M + t;

        mat mul(2, vector<int>(2));
        for(int i=0; i<2; i++) mul[i][i] = 1;

        mat ba(2, vector<int>(2));
        ba = {{1, 1}, {1, 0}};

        while(N > 0) {
            if(N % 2 == 1) mul = f(mul, ba);

            ba = f(ba, ba);
            N /= 2;
        }

        v[t] = mul[0][1];
    }

    int ans = (v[0] * v[1]) % mod;

    cout << ans << "\n";
}
