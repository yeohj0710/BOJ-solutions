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

        int ans = 1, cnt = 1, dif = v[1] - v[0];

        for(int i=1; i<N; i++) {
            if(v[i] - v[i-1] == dif) cnt++;
            else {
                ans = max(ans, cnt);

                cnt = 2;
                dif = v[i] - v[i-1];
            }
        }
        ans = max(ans, cnt);

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
