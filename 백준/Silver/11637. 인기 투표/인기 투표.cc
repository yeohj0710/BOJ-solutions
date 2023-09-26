#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> v(N+1);

        int mx = 0, sum = 0;

        for(int i=1; i<=N; i++) {
            cin >> v[i];

            mx = max(mx, v[i]);
            sum += v[i];
        }

        int cnt = 0, idx = 0;

        for(int i=1; i<=N; i++)
            if(v[i] == mx) cnt++, idx = i;

        if(cnt >= 2) {
            cout << "no winner\n";
            continue;
        }

        if(mx > sum - mx) cout << "majority winner " << idx << "\n";
        else cout << "minority winner " << idx << "\n";
    }
}
