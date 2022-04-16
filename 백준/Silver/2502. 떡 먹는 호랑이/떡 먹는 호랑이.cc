#include <bits/stdc++.h>
#define MAX 31
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int D, K; cin >> D >> K;

    for(int i=K; i>=0; i--) {
        int dp[MAX] = {0, K, i};

        bool check = true;
        for(int j=3; j<=D; j++) {
            dp[j] = dp[j-2] - dp[j-1];
            if(dp[j] < 0 || dp[j] > dp[j-1]) {
                check = false;
                break;
            }
        }
        if(!check) continue;

        if(dp[D] > 0) {
            cout << dp[D] << "\n" << dp[D-1] << "\n";
            return 0;
        }
    }
}
