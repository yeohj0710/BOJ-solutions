#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    int ans = 0, cur = 1;

    while(true) {
        if(v[cur] == cur || v[cur] == 0) break;

        int tmp = v[cur];

        v[cur] = cur;
        cur = tmp;
        ans++;
    }

    cout << ans << "\n";
}
