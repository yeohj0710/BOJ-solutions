#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    for(int i=20; i>=0; i--) {
        vector<int> u;

        for(int j=0; j<v.size(); j++)
            if((1 << i) & v[j]) u.push_back(v[j]);

        if(u.size() >= M) v = u;
    }

    int ans = 0;

    if(v.size() > 0) ans = v[0];

    for(int i=0; i<v.size(); i++) ans &= v[i];

    cout << ans << "\n";
}
