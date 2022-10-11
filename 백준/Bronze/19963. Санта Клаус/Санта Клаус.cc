#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<bool> v(N+1);

    for(int i=0; i<M; i++) {
        int x; cin >> x;

        v[x] = true;
    }

    for(int i=0; i<K; i++) {
        int x; cin >> x;

        v[x] = true;
    }

    cout << N - (M + K) << "\n";

    for(int i=1; i<=N; i++)
        if(!v[i]) cout << i << " ";
}
