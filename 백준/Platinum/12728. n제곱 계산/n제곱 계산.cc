#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef vector<vector<int>> mat;
int N = 2, mod = 1000, M;

mat f(mat& v, mat& u) {
    mat w(N, vector<int>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            for(int k=0; k<N; k++)
                w[i][j] = (w[i][j] + v[i][k] * u[k][j]) % mod;

    return w;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int tc; cin >> tc;

    for(int t=1; t<=tc; t++) {
        cout << "Case #" << t << ": ";

        cin >> M;

        mat mul(N, vector<int>(N));
        for(int i=0; i<N; i++) mul[i][i] = 1;

        mat bas = {{3, 5}, {1, 3}};

        while(M > 0) {
            if(M % 2 == 1) mul = f(mul, bas);

            bas = f(bas, bas);
            M /= 2;
        }

        string ans = to_string((int)(mul[0][0] * 2 - 1 + 1000) % 1000);

        while(ans.length() < 3) ans = '0' + ans;

        cout << ans << "\n";
    }
}
