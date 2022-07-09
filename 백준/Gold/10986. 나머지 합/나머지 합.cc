#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) {
        int x; cin >> x;
        v[i] = v[i-1] + x;
    }

    vector<int> u(M);
    for(int i=1; i<=N; i++) u[v[i] % M]++;

    int ans = 0;
    for(int i=1; i<=N; i++)
        if(v[i] % M == 0) ans++;
    for(int i=0; i<M; i++) ans += u[i] * (u[i] - 1) / 2;

    cout << ans << "\n";
}
