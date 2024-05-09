#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int ans = 1, cnt = 0;

    for(int i=N/2+1; i<=N; i++) {
        ans *= i;

        if(i % 2 == 0) ans /= 2, cnt++;
    }

    for(int i=cnt; i<N/2; i++) ans /= 2;

    cout << ans << "\n";
}
