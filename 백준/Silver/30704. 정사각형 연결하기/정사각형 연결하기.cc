#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        int x = ceil(sqrt(N));
        int y = (N - 1) / x + 1;

        cout << (x + y) * 2 << "\n";
    }
}
