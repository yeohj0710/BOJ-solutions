#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    int cur; cin >> cur;

    vector<int> v(N+1);

    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        cur += x;

        if(cur < K) v[i] = v[i-1] + 1;
        else v[i] = v[i-1];
    }

    while(M--) {
        int a, b; cin >> a >> b;

        cout << v[b-1] - v[a-1] << "\n";
    }
}
