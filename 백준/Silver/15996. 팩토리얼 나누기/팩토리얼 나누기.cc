#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int ans = 0, div = M;

    while(div <= N) {
        ans += N / div;

        div *= M;
    }

    cout << ans << "\n";
}
