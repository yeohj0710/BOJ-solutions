#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) {
        int x; cin >> x;

        v[i] = x * 10;
    }

    sort(v.begin(), v.end());

    int ans = 0;
    for(int i=N-1; i>=0; i--) {
        ans += (v.begin()+i) - lower_bound(v.begin(), v.begin()+i, v[i]/10*9);
    }

    cout << ans << "\n";
}
