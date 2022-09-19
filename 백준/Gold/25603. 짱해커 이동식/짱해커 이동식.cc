#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int l = 1, r = 1e9, ans = 1e9;

    while(l <= r) {
        int m = (l + r) / 2;

        bool check = true;
        int cnt = 0;

        for(int i=0; i<N; i++) {
            if(v[i] > m) {
                cnt++;

                if(cnt >= M) check = false;
            }
            else cnt = 0;
        }

        if(check) {
            ans = min(ans, m);
            r = m - 1;
        }
        else l = m + 1;
    }

    cout << ans << "\n";
}
