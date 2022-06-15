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

    for(int i=0; i<N; i++) {
        int sum = 0;
        for(int j=0; j<N; j++) {
            sum += v[(i+j)%N] * (j);
        }

        ans = min(ans, sum);
    }

    cout << ans << "\n";
}
