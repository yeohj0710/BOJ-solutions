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

    int ans = INT_MAX;
    for(int i=0; i<N/2; i++) ans = min(ans, v[i] + v[N-1-i]);

    cout << ans << "\n";
}
