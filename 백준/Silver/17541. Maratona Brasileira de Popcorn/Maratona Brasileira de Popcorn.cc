#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<int> v(N);
    int Max = 0;

    for(int i=0; i<N; i++) {
        cin >> v[i];
        Max = max(Max, v[i]);
    }

    int l = Max, r = INT_MAX, ans = INT_MAX;

    while(l <= r) {
        int m = (l + r)/2;

        int cnt = 1, sum = 0;
        for(int i=0; i<N; i++) {
            if(sum + v[i] > m) {
                sum = 0;
                cnt++;
            }

            sum += v[i];
        }

        if(cnt <= M) {
            ans = min(ans, m);
            r = m - 1;
        }
        else l = m + 1;
    }

    ans = (ans - 1)/K + 1;

    cout << ans << "\n";
}
