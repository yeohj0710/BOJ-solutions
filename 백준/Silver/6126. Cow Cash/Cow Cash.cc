#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vector<int> dp(M+1);
    dp[0] = 1;

    for(int i=0; i<N; i++)
        for(int j=v[i]; j<=M; j++) dp[j] += dp[j - v[i]];

    cout << dp[M] << "\n";
}
