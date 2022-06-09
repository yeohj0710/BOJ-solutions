#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, M; cin >> N >> M;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        sort(v.begin(), v.end());

        int ans = N, time = 0, tot = 0;
        for(int i=0; i<N; i++) {
            if(time + v[i] > M) {
                ans = i;
                break;
            }

            time += v[i];
            tot += time;
        }

        cout << "Case " << t << ": " << ans << " " << time << " " << tot << "\n";
    }
}
