#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int ans = 0;

    while(N--) {
        vector<int> v(3);

        for(int i=0; i<3; i++) {
            cin >> v[i];

            if(v[i] == -1) v[i] = INT_MAX;
        }

        if(v[0] == INT_MAX) continue;
        if(v[0] > v[1] || v[1] > v[2]) continue;

        ans++;
    }

    cout << ans << "\n";
}
