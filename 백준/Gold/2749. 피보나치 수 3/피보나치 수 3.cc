#include <bits/stdc++.h>
#define MOD 1000000
using namespace std;

int fibo[1500001] = {0, 1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=2; i<=1500000; i++)
        fibo[i] = (fibo[i-1] + fibo[i-2]) % MOD;

    long long N; cin >> N;
    cout << fibo[N % 1500000];
}
