#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        v[i] = v[i-1] + x;
    }

    int i = 1, j = 1, ans = INT_MAX;

    while(i <= j && j <= N) {
        int sum = v[j] - v[i-1];

        if(sum >= M) {
            ans = min(ans, j - i + 1);
            i++;

            if(i > j) j = i;
        }
        else j++;
    }

    if(ans != INT_MAX) cout << ans << "\n";
    else cout << "NEPAVYKS\n";
}
