#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> mul(vector<vector<int>> v, vector<vector<int>> u) {
    int N = v[0].size();

    vector<vector<int>> w(N, vector<int>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            for(int k=0; k<N; k++) w[i][j] = (w[i][j] + v[i][k] * u[k][j]) % 1000;

    return w;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N, vector<int>(N));
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> v[i][j];

    vector<vector<int>> u(N, vector<int>(N));
    for(int i=0; i<N; i++) u[i][i] = 1;

    while(M > 0) {
        if(M % 2 == 1) u = mul(u, v);

        v = mul(v, v);
        M /= 2;
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) cout << u[i][j] << " ";
        cout << "\n";
    }
}
