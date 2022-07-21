#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<pair<string, int>> v(N);
    for(int i=0; i<N; i++) cin >> v[i].first >> v[i].second;

    while(M--) {
        int x; cin >> x;

        int l = 0, r = N-1;
        string ans;

        while(l <= r) {
            int m = (l + r)/2;

            if(x <= v[m].second) {
                ans = v[m].first;
                r = m - 1;
            }
            else l = m + 1;
        }

        cout << ans << "\n";
    }
}
