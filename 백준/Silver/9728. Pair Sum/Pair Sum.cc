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

        int i = 0, j = N-1, ans = 0;

        while(i < j) {
            int sum = v[i] + v[j];

            if(sum >= M) {
                if(sum == M) ans++;
                j--;
            }
            else i++;
        }

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
