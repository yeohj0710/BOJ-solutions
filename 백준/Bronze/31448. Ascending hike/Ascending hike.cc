#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0, cur = 0, low = v[0];

    for(int i=1; i<N; i++) {
        if(v[i] > v[i-1]) {
            cur = v[i] - low;
        }
        else {
            ans = max(ans, cur);
            cur = 0;
            low = v[i];
        }
    }
    ans = max(ans, cur);

    cout << ans << "\n";
}
