#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(M), u(M);
    for(int i=0; i<M; i++) cin >> v[i];
    for(int i=0; i<M; i++) cin >> u[i];

    int ans = 0;

    if(N == 1) {
        sort(v.begin(), v.end());
        sort(u.begin(), u.end());

        for(int i=0; i<M; i++) ans += max(v[i], u[i]);
    }
    else {
        sort(v.begin(), v.end());
        sort(u.begin(), u.end(), greater<int>());

        for(int i=0; i<M; i++) ans += max(v[i], u[i]);
    }

    cout << ans << "\n";
}
