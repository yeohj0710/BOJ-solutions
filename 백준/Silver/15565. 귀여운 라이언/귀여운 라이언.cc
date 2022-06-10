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
    for(int i=0; i<N; i++) {
        if(v[i] == 1) u[i+1] = u[i] + 1;
        else u[i+1] = u[i];
    }

    int i = 0, j = 1, ans = INT_MAX;
    while(j <= N) {
        if(u[j] - u[i] >= M) {
            if(u[j] - u[i] == M) ans = min(ans, j - i);
            i++;
            if(i > j) j = i;
        }
        else j++;
    }

    if(ans != INT_MAX) cout << ans << "\n";
    else cout << -1 << "\n";
}
