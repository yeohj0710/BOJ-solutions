#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N), u(M);

    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<M; i++) cin >> u[i];

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    unordered_map<int, int> m;

    for(int i=0; i<N; i++)
        for(int j=0; j<i; j++) m[v[i] - v[j]]++;

    int ans = 0;

    for(int i=0; i<M; i++)
        for(int j=0; j<i; j++) ans += m[u[i] - u[j]];

    cout << ans << "\n";
}
