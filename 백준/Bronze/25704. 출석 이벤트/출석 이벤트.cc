#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int ans = M;

    if(N >= 5) ans = min(ans, max(M - 500, (int)0));
    if(N >= 10) ans = min(ans, M / 10 * 9);
    if(N >= 15) ans = min(ans, max(M - 2000, (int)0));
    if(N >= 20) ans = min(ans, M / 4 * 3);

    cout << ans << "\n";
}
