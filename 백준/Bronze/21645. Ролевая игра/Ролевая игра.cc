#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    int max_a = 0, max_b = 0;
    for(int i=1; i<=M; i++) {
        int a = i / K, b = i % K;

        max_a = max(max_a, a);
        max_b = max(max_b, b);
    }

    cout << (max_a + max_b) * N << "\n";
}
