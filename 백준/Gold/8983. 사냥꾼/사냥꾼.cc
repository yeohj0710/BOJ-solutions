#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int ans = 0;

    while(M--) {
        int x, y; cin >> x >> y;

        int l = 0, r = N-1, tr = 1e2;

        while(tr--) {
            int m1 = (l*2 + r) / 3;
            int m2 = (l + r*2) / 3;

            int d1 = abs(x - v[m1]) + y;
            int d2 = abs(x - v[m2]) + y;

            if(d1 > d2) l = m1;
            else r = m2;
        }

        bool check = false;

        for(int i=l; i<=r; i++)
            if(abs(x - v[i]) + y <= K) check = true;

        if(check) ans++;
    }

    cout << ans << "\n";
}
