#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        int ans = 0;
        for(int i=1; i<N-1; i++)
            if(v[i] > v[i-1] && v[i] > v[i+1]) ans++;

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
