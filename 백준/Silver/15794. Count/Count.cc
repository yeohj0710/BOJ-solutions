#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int M; cin >> M;

    sort(v.begin(), v.end());

    int l = 0, r = N-1, diff = INT_MAX;

    while(l < r) {
        diff = min(diff, abs(v[l] + v[r] - M));

        if(v[l] + v[r] < M) l++;
        else r--;
    }

    int ans = 0;
    for(int i=0; i<N; i++) {
        ans += upper_bound(v.begin()+i+1, v.end(), -v[i] + M + diff)
               - lower_bound(v.begin()+i+1, v.end(), -v[i] + M + diff);

        if(diff != 0) ans += upper_bound(v.begin()+i+1, v.end(), -v[i] + M - diff)
                             - lower_bound(v.begin()+i+1, v.end(), -v[i] + M - diff);
    }

    cout << ans << "\n";
}
