#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    unordered_map<int, int> m;
    int ans = 0;

    for(int i=0; i<N; i++) {
        cin >> v[i];

        while(v[i] % 2 == 0) v[i] /= 2;

        m[v[i]]++;

        ans = max(ans, m[v[i]]);
    }

    cout << ans << "\n";
}
