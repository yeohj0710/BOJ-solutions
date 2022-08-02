#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 4e4 + 1;

    vector<bool> p(Max, true);
    p[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<Max; i++)
        if(p[i]) v.push_back(i);

    int N; cin >> N;

    vector<int> dp(N+1);
    dp[0] = 1;

    for(int i=0; i<v.size(); i++)
        for(int j=v[i]; j<=N; j++) dp[j] = (dp[j] + dp[j - v[i]]) % 123456789;

    cout << dp[N] << "\n";
}
