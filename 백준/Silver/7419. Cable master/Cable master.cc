#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) {
        double x; cin >> x;

        v[i] = x * 100;
    }

    int l = 1, r = INT_MAX, ans = 0;

    while(l <= r) {
        int m = (l + r)/2;

        int cnt = 0;
        for(int i=0; i<N; i++) cnt += v[i] / m;

        if(cnt >= M) {
            ans = max(ans, m);
            l = m + 1;
        }
        else r = m - 1;
    }

    cout << fixed;
    cout.precision(2);

    cout << (double)ans/100 << "\n";
}
