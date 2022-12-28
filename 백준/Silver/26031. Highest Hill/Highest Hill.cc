#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;

    for(int i=1; i<N-1; i++) {
        if(!(v[i] >= v[i-1] && v[i] >= v[i+1])) continue;
        if(v[i] == v[i-1] && v[i] == v[i+1]) continue;

        int l = i, r = i;

        while(l-1 >= 0 && v[l-1] <= v[l]) l--;
        while(r+1 < N && v[r+1] <= v[r]) r++;

        ans = max(ans, min(v[i] - v[l], v[i] - v[r]));
    }

    cout << ans << "\n";
}
