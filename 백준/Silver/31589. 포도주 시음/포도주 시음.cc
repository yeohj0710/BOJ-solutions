#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int ans = 0, i = 0, j = N-1;

    ans += v[j];
    j--, M--;

    while(M >= 2) {
        ans += v[j] - v[i];
        i++, j--, M -= 2;
    }

    cout << ans << "\n";
}
