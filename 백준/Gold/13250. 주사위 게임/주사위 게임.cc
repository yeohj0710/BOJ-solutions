#include<bits/stdc++.h>
#define MAX 1000001
using namespace std;

double dp[MAX] = {};

int main() {
    int N; cin >> N;

    for(int i=1; i<=N; i++)
        for(int j=1; j<=6; j++) {
            if(i-j <= 0) dp[i] += 1.0/6.0;
            else dp[i] += (dp[i-j] + 1.0)/6.0;
        }

    cout << fixed;
    cout.precision(10);

    cout << dp[N];
}
