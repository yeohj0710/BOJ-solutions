#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vector<int> sum(N);
    sum[0] = v[0];
    for(int i=1; i<N; i++) sum[i] = sum[i-1] + v[i];

    int ans = 0;
    for(int i=1; i<N; i++) ans = (ans + sum[i-1]*v[i]) % (int)(1e9 + 7);

    cout << ans << "\n";
}
