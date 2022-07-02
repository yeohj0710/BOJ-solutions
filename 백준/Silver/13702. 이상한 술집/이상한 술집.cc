#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int l = 0, r = INT_MAX, ans = 0;

    while(l <= r) {
        int m = (l+r)/2;

        int cnt = 0;
        for(int i=0; i<N; i++) cnt += v[i]/m;

        if(cnt < M) r = m - 1;
        else {
            ans = m;
            l = m + 1;
        }
    }

    cout << ans << "\n";
}
