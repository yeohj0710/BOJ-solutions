#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        unordered_map<int, int> m;
        int ans = 0;

        for(int j=1; j<N-1; j++) {
            int i = j-1;
            m[v[i]]++;

            for(int k=j+1; k<N; k++) ans += m[v[j]*2 - v[k]];
        }

        cout << ans << "\n";
    }
}
