#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    vector<string> v(N);

    for(int i=0; i<N; i++) {
        cin >> v[i];

        sort(v[i].begin(), v[i].end());
    }

    sort(v.begin(), v.end());

    string ans = "";

    for(int i=0; i<K; i++) ans += v[i];

    sort(ans.begin(), ans.end());

    cout << ans << "\n";
}
