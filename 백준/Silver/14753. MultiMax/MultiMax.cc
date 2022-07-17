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

    int ans = INT_MIN;

    ans = max(ans, v[0]*v[1]);
    ans = max(ans, v[N-2]*v[N-1]);
    ans = max(ans, v[N-3]*v[N-2]*v[N-1]);
    ans = max(ans, v[0]*v[1]*v[N-1]);

    cout << ans << "\n";
}
