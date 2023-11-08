#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0, cnt = 0;

    if(v[0] > 0) cnt++;

    for(int i=1; i<N; i++) {
        if(v[i] == 0 && v[i-1] == 0) {
            ans = max(ans, cnt);
            cnt = 0;
        }
        else if(v[i] == 0) continue;
        else if(v[i] > 0) cnt++;
    }

    ans = max(ans, cnt);

    cout << ans << "\n";
}
