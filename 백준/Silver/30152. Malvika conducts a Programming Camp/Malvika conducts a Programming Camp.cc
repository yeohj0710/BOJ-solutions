#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        if(N == 1) cout << 0 << "\n";
        else if(N == 2) cout << M << "\n";
        else cout << N + M * 2 - 3 << "\n";
    }
}
