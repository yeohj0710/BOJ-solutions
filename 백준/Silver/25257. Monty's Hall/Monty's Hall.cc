#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(6);

    double N, M, K; cin >> N >> M >> K;

    if(N - M - K <= M) cout << (M + K) / N << "\n";
    else cout << ((N - M) / N) * (M / (N - M - K)) << "\n";
}
