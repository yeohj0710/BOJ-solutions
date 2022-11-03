#include <bits/stdc++.h>
#define int long long
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 1, x = 1, mod = 5e8 + 9;

    for(int i=2; i<=N; i++) {
        x = (x * 4) % mod;

        ans = (ans + x) % mod;
    }

    cout << ans << "\n";
}
