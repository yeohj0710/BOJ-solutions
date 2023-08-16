#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    vector<int> v(M+1);

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        v[x]++;
    }

    for(int i=1; i<=M; i++) v[i] += v[i-1];

    int ans = 0;

    for(int i=1; i<M; i++)
        for(int j=i; j<M; j++) {
            int sum = v[j] - v[i-1];

            if(sum <= K) ans = max(ans, j-i+1);
        }

    cout << ans << "\n";
}
