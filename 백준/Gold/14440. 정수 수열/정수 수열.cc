#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef vector<vector<int>> mat;
int mod = 100;

mat f(mat& v, mat& u) {
    mat w(2, vector<int>(2));

    for(int i=0; i<v.size(); i++)
        for(int j=0; j<u[0].size(); j++)
            for(int k=0; k<v[0].size(); k++)
                w[i][j] = (w[i][j] + v[i][k] * u[k][j]) % mod;

    return w;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int x, y, a0, a1, N; cin >> x >> y >> a0 >> a1 >> N;

    if(N == 0) {
        printf("%02d\n", x);
        return 0;
    }
    else if(N == 1) {
        printf("%02d\n", y);
        return 0;
    }

    mat mul(2, vector<int>(2));
    for(int i=0; i<2; i++) mul[i][i] = 1;

    mat ba(2, vector<int>(2));
    ba[0][0] = x, ba[0][1] = y, ba[1][0] = 1, ba[1][1] = 0;

    N--;

    while(N > 0) {
        if(N % 2 == 1) mul = f(mul, ba);

        ba = f(ba, ba);
        N /= 2;
    }

    int ans = (mul[0][0] * a1 + mul[0][1] * a0) % mod;

    printf("%02d\n", ans);
}
