#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

long long fastPow(long long ret, int exp) {
    if(exp == 0) return 1;
    else if(exp == 1) return ret;

    if(exp % 2 == 0) {
        long long temp = fastPow(ret, exp/2);
        return (temp * temp) % MOD;
    }
    else {
        long long temp = fastPow(ret, exp - 1);
        return (temp * ret) % MOD;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;
    vector<long long> factorial(N+1);
    factorial[0] = factorial[1] = 1;
    for(int i=2; i<=N; i++)
        factorial[i] = (factorial[i-1] * i) % MOD;

    cout << factorial[N] * fastPow((factorial[K] * factorial[N-K]) % MOD, MOD - 2) % MOD;
}
