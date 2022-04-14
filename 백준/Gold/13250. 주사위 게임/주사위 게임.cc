#include<bits/stdc++.h>
#define MAX 1000001
using namespace std;

double dp[MAX] = {};

double DP(int N) {
    if(N <= 0) return 0;
    if(dp[N] != 0) return dp[N];

    for(int i=1; i<=6; i++)
        dp[N] += (DP(N-i) + 1)/6;

    return dp[N];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    cout << fixed;
    cout.precision(10);

    cout << DP(N);
}
