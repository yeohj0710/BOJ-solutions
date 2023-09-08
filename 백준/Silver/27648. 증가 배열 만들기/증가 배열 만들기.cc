#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    if(K < N + M - 1) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cout << i + j + 1 << " ";
        cout << "\n";
    }
}
