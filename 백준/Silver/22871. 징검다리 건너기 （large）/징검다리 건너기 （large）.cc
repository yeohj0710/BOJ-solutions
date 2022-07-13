#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int l = 0, r = INT_MAX;

    while(l <= r) {
        int K = (l + r)/2;

        vector<bool> dp(N, false);
        dp[0] = true;

        for(int i=0; i<N; i++)
            for(int j=0; j<i; j++) {
                if(!dp[j]) continue;
                if((i - j) * (1 + abs(v[i] - v[j])) <= K) dp[i] = true;
            }

        if(dp[N-1]) r = K - 1;
        else l = K + 1;
    }

    cout << l << "\n";
}
