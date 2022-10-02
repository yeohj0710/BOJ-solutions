#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        int sum = 0, Min = 0, ans = INT_MIN;

        for(int i=0; i<N; i++) {
            sum += v[i];

            ans = max(ans, sum - Min);

            Min = min(Min, sum);
        }

        cout << ans << "\n";
    }
}
