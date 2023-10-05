#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int N; cin >> N;

        if(N == 0) break;

        vector<int> v(N+1);
        for(int i=1; i<=N; i++) cin >> v[i];

        int M; cin >> M;

        int val = v[M], ans = 0;

        while(true) {
            int mn = INT_MAX;

            for(int i=1; i<=N; i++)
                mn = min(mn, v[i]);

            for(int i=1; i<=N; i++)
                if(v[i] == mn) v[i]++, ans++;

            if(v[M] > val) break;
        }

        cout << ans << "\n";
    }
}
