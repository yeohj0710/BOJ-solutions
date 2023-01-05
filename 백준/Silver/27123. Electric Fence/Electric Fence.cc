#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    cout << (K * M - (__gcd(N, M) + __gcd(abs(K-N), M) + K)) / 2 + 1 << "\n";
}
