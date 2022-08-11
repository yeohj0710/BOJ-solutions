#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int K, M, N; cin >> K >> M >> N;

    int x = 0;

    vector<int> v(N+1);
    for(int i=0; i<N; i++) cin >> v[i];

    v[N] = K;

    for(int i=1; i<=N; i++) {
        if(i % 2 == 1) x = min(x + (v[i] - v[i-1]), M);
        else x = max(x - (v[i] - v[i-1]), (int)0);
    }

    if(N % 2 == 0) cout << x << "\n";
    else cout << M - x << "\n";
}
