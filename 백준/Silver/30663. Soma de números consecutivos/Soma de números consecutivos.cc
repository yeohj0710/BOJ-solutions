#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int N; cin >> N;

        if(N == 0) break;

        while(N % 2 == 0) N /= 2;

        if(N > 1) cout << "SIM\n";
        else cout << "NAO\n";
    }
}
