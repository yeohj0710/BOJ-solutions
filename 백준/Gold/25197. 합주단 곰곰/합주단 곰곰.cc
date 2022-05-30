#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    cout << fixed;
    cout.precision(6);

    cout << (double)N * (N-1) / (2 * K) << "\n";
}
