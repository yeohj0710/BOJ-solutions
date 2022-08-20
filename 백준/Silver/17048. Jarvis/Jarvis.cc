#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N), u(N);

    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<N; i++) cin >> u[i];

    map<int, int> m;
    vector<int> w;

    for(int i=0; i<N; i++) {
        if(m[u[i] - v[i]] == 0)
            w.push_back(u[i] - v[i]);

        m[u[i] - v[i]]++;
    }

    int ans = 0;

    for(int i=0; i<w.size(); i++) ans = max(ans, m[w[i]]);

    cout << ans << "\n";
}
