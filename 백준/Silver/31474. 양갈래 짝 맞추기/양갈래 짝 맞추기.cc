#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    N /= 2;

    int ans = 1;

    for(int i=N+1; i<=N*2; i++) {
        ans *= i;

        if(i % 2 == 0) ans /= 2;
    }

    for(int i=0; i<N/2; i++) ans /= 2;

    cout << ans << "\n";
}
