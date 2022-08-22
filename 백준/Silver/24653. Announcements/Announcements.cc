#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int M; cin >> M;

    map<int, bool> m;
    int ans = 0;

    for(int i=0; i<N; i++) {
        int x = v[i] / M;

        if(!m[x]) ans++;

        m[x] = true;
    }

    cout << ans << "\n";
}
