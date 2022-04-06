#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

long long fac[2000001];
long long kPow[1000001];

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

    fac[0] = fac[1] = 1;
    for(int i=2; i<=N+K; i++)
        fac[i] = (fac[i-1] * i) % MOD;

    kPow[0] = 1, kPow[1] = K;
    for(int i=2; i<=N; i++)
        kPow[i] = (kPow[i-1] * K) % MOD;

    long long ans = 0;
    for(long long i=N; i>=(N+1)/2; i--) {
        long long j = N - i;

        long long temp = (i-j+1) * fac[i+j] % MOD;
        temp = temp * fastPow((fac[i+1] * fac[j]) % MOD, MOD-2) % MOD;
        temp = temp * kPow[i] % MOD;

        ans = (ans + temp) % MOD;
    }

    cout << ans;
}
