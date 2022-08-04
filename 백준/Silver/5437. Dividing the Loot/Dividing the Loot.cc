#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        vector<int> v(M);
        for(int i=0; i<M; i++) cin >> v[i];

        sort(v.begin(), v.end(), greater<int>());

        int ans = 0;
        for(int i=0; i<M/(N+1); i++) ans += v[i];

        cout << ans << "\n";
    }
}
