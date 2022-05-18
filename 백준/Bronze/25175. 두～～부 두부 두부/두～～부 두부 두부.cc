#include <bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    int temp = M - 1 + K - 3;

    while(temp < 0) temp += N;

    int ans = temp % N + 1;

    cout << ans << "\n";
}
