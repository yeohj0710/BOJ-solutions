#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0, cnt = 1;

    for(int i=1; i<N; i++) {
        if(v[i] > v[i-1]) cnt++;
        else {
            ans += cnt * (cnt + 1) / 2;
            cnt = 1;
        }
    }

    ans += cnt * (cnt + 1) / 2;

    cout << ans << "\n";
}
