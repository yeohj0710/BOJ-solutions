#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vector<int> dp(N, 1);
    int mod = 998244353;

    for(int i=0; i<N; i++)
        for(int j=0; j<i; j++)
            if(v[j] < v[i]) dp[i] = (dp[i] + dp[j]) % mod;

    for(int i=0; i<N; i++) cout << dp[i] << " ";
    cout << "\n";
}
