#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int Max = 0;

    vector<int> v(N);
    for(int i=0; i<N; i++) {
        cin >> v[i];

        Max = max(Max, v[i]);
    }

    int M; cin >> M;

    if(M == 1) {
        cout << Max << "\n";
        return 0;
    }

    int l = 0, r = 1e18, ans = 1e18;

    while(l <= r) {
        int m = (l + r) / 2;

        vector<int> u(v);
        for(int i=0; i<N; i++) u[i] = max(u[i] - m, (int)0);

        int sum = 0;

        for(int i=0; i<N; i++)
            if(u[i] > 0) sum += (u[i] - 1) / (M - 1) + 1;

        if(sum <= m) {
            ans = min(ans, m);
            r = m - 1;
        }
        else l = m + 1;
    }

    cout << ans << "\n";
}
