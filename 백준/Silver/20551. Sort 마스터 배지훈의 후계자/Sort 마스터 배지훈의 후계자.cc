#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    while(M--) {
        int x; cin >> x;

        if(upper_bound(v.begin(), v.end(), x) - lower_bound(v.begin(), v.end(), x) == 0) cout << -1 << "\n";
        else cout << lower_bound(v.begin(), v.end(), x) - v.begin() << "\n";
    }
}
