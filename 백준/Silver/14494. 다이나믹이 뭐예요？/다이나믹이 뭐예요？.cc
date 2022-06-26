#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N, vector<int>(M));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            if(i == 0 || j == 0) v[i][j] = 1;
            else v[i][j] = (v[i-1][j-1] + v[i-1][j] + v[i][j-1]) % (int)(1e9 + 7);
        }

    cout << v[N-1][M-1] << "\n";
}
