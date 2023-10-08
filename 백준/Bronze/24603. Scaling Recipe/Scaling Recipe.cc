#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    while(N--) {
        int x; cin >> x;

        cout << x * K / M << "\n";
    }
}
