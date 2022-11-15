#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<vector<int>> v(N, vector<int>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    vector<int> u(N+1);
    for(int i=1; i<=N; i++) u[i] = i;

    while(K--) {
        int Q; cin >> Q;

        if(Q == 0) {
            int a, b, c; cin >> a >> b >> c;

            v[u[a]][b] = c;
        }
        else if(Q == 1) {
            int a, b; cin >> a >> b;

            swap(u[a], u[b]);
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cout << v[u[i]][j] << " ";
        cout << "\n";
    }
}
