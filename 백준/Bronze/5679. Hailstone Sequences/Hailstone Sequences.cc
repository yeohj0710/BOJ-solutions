#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        int ans = 0;
        while(true) {
            ans = max(ans, N);
            if(N == 1) break;

            if(N % 2 == 0) N /= 2;
            else N = N*3 + 1;
        }

        cout << ans << "\n";
    }
}
