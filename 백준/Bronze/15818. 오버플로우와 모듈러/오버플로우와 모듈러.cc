#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, mod; cin >> N >> mod;
    long long mul = 1;
    while(N--) {
        long long val; cin >> val;
        mul *= val%mod;
        mul %= mod;
    }
    cout << mul;
}
