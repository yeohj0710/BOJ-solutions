#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);

    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int cur = v[0], ans = 1;

    for(int i=1; i<N; i++) {
        if(v[i] >= cur * 2) {
            ans++;
            cur = v[i];
        }
    }

    cout << ans << "\n";
}
