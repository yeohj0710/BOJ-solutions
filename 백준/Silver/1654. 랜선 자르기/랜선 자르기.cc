#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int l = 0, h = INT_MAX, ans = 0;

    while(l <= h) {
        int m = (l + h)/2;

        int cnt = 0;
        for(int i=0; i<N; i++) cnt += v[i] / m;

        if(cnt >= M) {
            ans = max(ans, m);
            l = m + 1;
        }
        else h = m - 1;
    }

    cout << ans << "\n";
}
