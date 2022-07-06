#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> mul(vector<vector<int>> v, vector<vector<int>> u) {
    vector<vector<int>> w(2, vector<int>(2));

    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
            for(int k=0; k<2; k++)
                w[i][j] = (w[i][j] + v[i][k] * u[k][j]) % (int)(1e9 + 7);

    return w;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<int>> v = {{0, 1}, {1, 1}};
    vector<vector<int>> u = {{1, 0}, {0, 1}};

    while(N > 0) {
        if(N % 2 == 1) u = mul(u, v);

        v = mul(v, v);
        N /= 2;
    }

    cout << u[0][1] << "\n";
}
