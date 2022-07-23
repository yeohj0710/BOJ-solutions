#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N*N);
    int tot = 0;

    for(int i=0; i<N*N; i++) {
        cin >> v[i];
        tot += v[i];
    }

    int l = 0, r = 1e7, ans = 1e7;

    while(l <= r) {
        int m = (l + r)/2;

        int sum = 0;
        for(int i=0; i<N*N; i++) sum += min(v[i], m);

        if(sum*2 >= tot) {
            ans = min(ans, m);
            r = m - 1;
        }
        else l = m + 1;
    }

    cout << ans << "\n";
}
