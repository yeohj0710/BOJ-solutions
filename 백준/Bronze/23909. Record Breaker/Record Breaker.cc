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

        if(N == 1) {
            cout << "Case #" << t << ": " << 1 << "\n";
            continue;
        }

        int Max = 0;

        for(int i=0; i<N; i++) {
            if(i == 0 && v[i] > v[i+1]) ans++;
            else if(i == N-1 && v[i] > Max) ans++;
            else if(v[i] > Max && v[i] > v[i+1]) ans++;

            Max = max(Max, v[i]);
        }

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
