#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int dp[10001] = {0, 1};

    int N; cin >> N;

    int sum = 0;
    for(int i=1; ; i++) {
        if(i >= 2) dp[i] = dp[i-1] + dp[i-2];

        sum += dp[i];

        if(sum >= N) {
            cout << i << "\n";
            break;
        }
    }
}
