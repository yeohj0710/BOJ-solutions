#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        N /= 2;

        int ans = 1;

        for(int i=1; i<=N; i++)
            ans = (ans * (i*2 - 1)) % 1000;

        cout << ans << "\n";
    }
}
