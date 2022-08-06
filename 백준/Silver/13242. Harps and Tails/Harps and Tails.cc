#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<string> v(N);
    map<string, int> m;

    for(int i=0; i<N; i++) {
        cin >> v[i];

        m[v[i]]++;
    }

    int ans = 0;
    for(int i=0; i<N; i++) ans = max(ans, m[v[i]]);

    cout << ans << "\n";
}
