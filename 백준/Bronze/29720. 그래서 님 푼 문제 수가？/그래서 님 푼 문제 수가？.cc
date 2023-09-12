#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    cout << max(N - (M * K), (int)0) << " " << max(N - M * (K - 1) - 1, (int)0) << "\n";
}
