#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vector<int> u(N+1);
    for(int i=1; i<=N; i++) u[i] = u[i-1] + v[i-1];

    map<int, int> m;
    int ans = 0;

    for(int i=0; i<=N; i++) {
        ans += m[u[i] - M];

        m[u[i]]++;
    }
    
    cout << ans << "\n";
}
