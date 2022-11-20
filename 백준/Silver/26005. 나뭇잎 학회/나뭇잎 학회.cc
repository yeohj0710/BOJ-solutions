#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    if(N == 1) {
        cout << 0 << "\n";
        return 0;
    }

    int ans = (N * N - 1) / 2 + 1;

    cout << ans << "\n";
}
