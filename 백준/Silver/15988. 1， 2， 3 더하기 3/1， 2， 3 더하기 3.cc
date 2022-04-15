#include<bits/stdc++.h>
#define MAX 1000001
#define MOD 1000000009
using namespace std;

int dp[MAX] = {0, 1, 2, 4};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=4; i<MAX; i++)
        dp[i] = ((dp[i-1] + dp[i-2]) % MOD + dp[i-3]) % MOD;

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        cout << dp[N] << "\n";
    }
}
