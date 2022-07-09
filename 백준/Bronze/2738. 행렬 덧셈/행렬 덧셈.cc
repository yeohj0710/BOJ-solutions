#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N, vector<int>(M));
    vector<vector<int>> u(v);

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> u[i][j];

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cout << v[i][j] + u[i][j] << " ";
        cout << "\n";
    }
}
