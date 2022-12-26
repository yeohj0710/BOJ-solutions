#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) {
        cin >> v[i];

        v[i] += v[i-1];
    }

    int i = 1, j = 1, ans = 0;

    while(j <= N) {
        int sum = v[j] - v[i-1];

        if(sum <= M) {
            ans = max(ans, j-i+1);
            j++;
        }
        else {
            i++;

            if(i > j) j = i;
        }
    }

    cout << ans << "\n";
}
