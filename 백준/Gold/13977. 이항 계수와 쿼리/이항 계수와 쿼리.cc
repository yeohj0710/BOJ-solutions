#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

long long factorial[4000001] = {1};

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

    for(int i=1; i<=4000000; i++)
        factorial[i] = (factorial[i-1] * i) % MOD;

    int T; cin >> T;
    while(T--) {
        int N, K; cin >> N >> K;
        cout << factorial[N] * fastPow((factorial[K] * factorial[N-K]) % MOD, MOD - 2) % MOD << "\n";
    }
}
