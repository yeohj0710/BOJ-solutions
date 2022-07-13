#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vector<bool> dp(N, false);
    dp[0] = true;

    for(int i=0; i<N; i++)
        for(int j=0; j<i; j++) {
            if(!dp[j]) continue;
            if((i - j) * (1 + abs(v[i] - v[j])) <= M) dp[i] = true;
        }

    if(dp[N-1]) cout << "YES\n";
    else cout << "NO\n";
}
