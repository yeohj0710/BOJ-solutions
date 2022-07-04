#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        v[i] = v[i-1] + x;
    }

    int i = 1, j = 1, ans = INT_MAX;

    while(j <= N) {
        int sum = v[j] - v[i-1];

        if(sum >= M) {
            ans = min(ans, j-i+1);
            i++;
            if(i > j) j = i;
        }
        else j++;
    }

    if(ans != INT_MAX) cout << ans << "\n";
    else cout << 0 << "\n";
}
