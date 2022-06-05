#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = INT_MAX;
    for(int i=0; i<N-1; i++) ans = min(ans, max(v[i], v[i+1]) - min(v[i], v[i+1]));

    cout << ans << "\n";
}
