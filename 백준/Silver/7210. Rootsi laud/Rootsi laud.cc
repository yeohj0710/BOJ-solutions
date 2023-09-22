#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);

    for(int i=0; i<N; i++) cin >> v[i];

    int gcd = __gcd(N, M);

    int ans = 0;

    for(int i=0; i<gcd; i++) {
        int sum = 0;

        for(int j=0; j<N/gcd; j++)
            sum += v[(i + j * gcd) % N];

        ans = max(ans, sum);
    }

    cout << ans << "\n";
}
