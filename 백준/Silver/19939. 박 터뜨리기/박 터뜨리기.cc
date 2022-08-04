#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    if(N < M * (M + 1) / 2) {
        cout << -1 << "\n";
        return 0;
    }

    int x = N - M * (M + 1) / 2;

    if(x % M == 0) cout << M - 1 << "\n";
    else cout << M << "\n";
}
