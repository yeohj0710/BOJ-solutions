#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        int ans = 1;
        vector<int> v(50);

        if(N % 2 == 0) {
            for(int i=0; i<50; i++) v[i] = (i+1)*2;
        }
        else {
            for(int i=0; i<50; i++) v[i] = i*2 + 1;
            ans++;

        }

        int l = 0, r = 49;
        while(l <= r) {
            int m = (l + r)/2;

            if(v[m] == N) break;

            if(v[m] < N) l = m + 1;
            else r = m - 1;

            ans++;
        }

        cout << ans << "\n";
    }
}
