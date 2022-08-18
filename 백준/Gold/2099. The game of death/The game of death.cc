#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef vector<vector<int>> mat;
int N, M, K, ex;

mat f(mat& v, mat& u) {
    mat w(N, vector<int>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            for(int k=0; k<N; k++)
                if(v[i][k] == 1 && u[k][j] == 1) w[i][j] = 1;

    return w;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> K >> M;

    mat ba(N, vector<int>(N));

    for(int i=0; i<N; i++) {
        int a, b; cin >> a >> b;

        ba[i][a-1] = ba[i][b-1] = 1;
    }

    mat v(N, vector<int>(N));
    for(int i=0; i<N; i++) v[i][i] = 1;

    ex = K;

    while(ex > 0) {
        if(ex % 2 == 1) v = f(v, ba);

        ba = f(ba, ba);
        ex /= 2;
    }

    while(M--) {
        int a, b; cin >> a >> b;

        if(v[a-1][b-1] > 0) cout << "death\n";
        else cout << "life\n";
    }
}
