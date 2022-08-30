#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, l, r; cin >> N >> l >> r;
        if(N == 0 && l == 0 && r == 0) break;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        int ans = 0;

        for(int i=l; i<=r; i++) {
            bool check = false;

            for(int j=0; j<N; j++) {
                if(i % v[j] == 0) {
                    if(j % 2 == 0) ans++;

                    check = true;

                    break;
                }
            }

            if(!check && N % 2 == 0) ans++;
        }

        cout << ans << "\n";
    }
}
