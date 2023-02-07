#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int ans = 0;

    if(N - M >= M * 6) ans = max(ans, M * 1000 * 7);
    else if((N - M) * 2 >= M * 5) ans = max(ans, (M * 1000 / 2) * 7);
    else if((N - M) * 4 >= M * 3) ans = max(ans, (M * 1000 / 4) * 7);

    cout << ans << "\n";
}
