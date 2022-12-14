#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    int ans = 1, add = 1;

    for(int i=1; i<=N; i++) {
        ans += add;

        if(i % 3 != 0) add++;
    }

    cout << ans << "\n";
}
