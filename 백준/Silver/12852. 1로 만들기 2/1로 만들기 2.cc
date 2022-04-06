#include <iostream>
using namespace std;

int dp[1000005] = {0, };
int Min(int a, int b) { return a<b?a:b; }

int main() {
    int N;
    cin >> N;
    for(int i=1; i<=N; i++) dp[i] = i-1;
    for(int i=2; i<=N; i++) {
        dp[i] = Min(dp[i], dp[i-1]+1);
        if(i%2 == 0) dp[i] = Min(dp[i], dp[i/2]+1);
        if(i%3 == 0) dp[i] = Min(dp[i], dp[i/3]+1);
    }
    cout << dp[N] << "\n";
    while(1) {
        cout << N << " ";
        if(N == 1) return 0;
        if(N%2 == 0 && dp[N] == dp[N/2]+1) N /= 2;
        else if(N%3 == 0 && dp[N] == dp[N/3]+1) N /= 3;
        else N--;
    }
}
