#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int l = 1, r = 2e5, ans = 2e5;

    while(l <= r) {
        int m = (l + r)/2;

        int a = 0, b = 0;

        for(int i=0; i<N; i++) {
            if(v[i] < m) a += v[i];
            else if(v[i] > m) b += v[i];
        }

        if(a >= b) {
            ans = min(ans, m);
            r = m - 1;
        }
        else l = m + 1;
    }

    cout << ans << "\n";
}
