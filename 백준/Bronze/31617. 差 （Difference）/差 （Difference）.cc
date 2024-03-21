#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int K, N; cin >> K >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int M; cin >> M;

    vector<int> u(M);
    for(int i=0; i<M; i++) cin >> u[i];

    int ans = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(v[i] + K == u[j]) ans++;

    cout << ans << "\n";
}
