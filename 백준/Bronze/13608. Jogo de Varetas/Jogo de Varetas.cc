#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<int> v(N);
        for(int i=0; i<N; i++) {
            int x; cin >> x >> v[i];
        }

        int ans = 0;

        for(int i=0; i<N; i++) {
            ans += v[i] / 4;
            v[i] -= (v[i]/4) * 4;
        }

        sort(v.begin(), v.end(), greater<int>());

        for(int i=0; i<N; i+=2) {
            if(i == N-1) break;

            if(v[i] >= 2 && v[i+1] >= 2) ans++;
        }

        cout << ans << "\n";
    }
}
