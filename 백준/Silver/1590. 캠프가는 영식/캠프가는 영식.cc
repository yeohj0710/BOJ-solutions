#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int a, b, c; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<s> v(N);
    for(int i=0; i<N; i++) cin >> v[i].a >> v[i].b >> v[i].c;

    int ans = INT_MAX;

    for(int i=0; i<N; i++) {
        for(int j=0; j<v[i].c; j++) {
            if(v[i].a + v[i].b * j >= M)
                ans = min(ans, (v[i].a + v[i].b * j) - M);
        }
    }

    if(ans != INT_MAX) cout << ans << "\n";
    else cout << -1 << "\n";
}
