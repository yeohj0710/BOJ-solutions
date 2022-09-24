#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<int> v(N+1, 1);
    v[0] = 0;

    while(K--) {
        int x; cin >> x;
        v[x] = 0;
    }

    vector<int> u(N+1);
    for(int i=1; i<=N; i++) u[i] = u[i-1] + v[i];

    int Max = 0;
    for(int i=M; i<=N; i++) Max = max(Max, u[i] - u[i-M]);

    if(Max >= M) cout << 0 << "\n";
    else cout << M - Max << "\n";
}
