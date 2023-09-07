#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    int cnt = 0;

    while(K >= 2) {
        K /= 2;
        cnt++;
    }

    cout << min(cnt + M, (int)(log2(N))) << "\n";
}
