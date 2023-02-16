#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, M, K; cin >> N >> M >> K;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        sort(v.begin(), v.end());

        int sum = 0, cnt = 0;

        for(int i=0; i<N; i++) {
            if(sum + v[i] > K) break;

            sum += v[i];
            cnt++;
        }

        cout << "Case " << t << ": " << min(M, cnt) << "\n";
    }
}
