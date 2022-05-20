#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int ans = 0;
    while(N != M) {
        if(N < M) swap(N, M);

        N -= M;
        ans++;
    }
    ans++;

    cout << ans << "\n";
}
