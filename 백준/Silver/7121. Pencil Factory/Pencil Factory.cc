#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    N++, M++;

    int lcm = N * M / __gcd(N, M);

    cout << K - K/N - K/M + K/lcm << " ";
    cout << K/lcm << " ";
    cout << K/M - K/lcm << " ";
    cout << K/N - K/lcm << "\n";
}
