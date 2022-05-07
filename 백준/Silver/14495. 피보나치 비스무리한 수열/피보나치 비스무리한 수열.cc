#include <bits/stdc++.h>
using namespace std;

const int MAX = 117;

long long dp[MAX] = {0, 1, 1, 1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    for(int i=4; i<=N; i++)
        dp[i] = dp[i-1] + dp[i-3];

    cout << dp[N] << "\n";
}
