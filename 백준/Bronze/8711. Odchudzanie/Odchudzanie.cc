#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int Max = 0, ans = 0;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        ans = max(ans, Max - x);
        Max = max(Max , x);
    }

    cout << ans << "\n";
}
