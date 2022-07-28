#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> dp(N+1, 1);

    for(int i=1; i<=N; i++) {
        int temp = i, sum = 0;

        while(temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if(i + sum <= N) dp[i + sum] += dp[i];
    }

    cout << dp[N] << "\n";
}
