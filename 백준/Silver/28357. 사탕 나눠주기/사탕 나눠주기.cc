#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int l = 0, r = LLONG_MAX, ans = LLONG_MAX;

    while(l <= r) {
        int m = (l + r) / 2;

        int sum = 0;

        for(int i=0; i<v.size(); i++)
            if(v[i] > m) sum += v[i] - m;

        if(sum <= M) {
            ans = min(ans, m);
            r = m - 1;
        }
        else l = m + 1;
    }

    cout << ans << "\n";
}
