#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        int ans = 0, a = 0, b = 1;

        for(int i=0; i<N; i++) {
            ans += b;
            a++;

            if(a == b) {
                b++;
                a = 0;
            }
        }

        cout << N << " " << ans << "\n";
    }
}
