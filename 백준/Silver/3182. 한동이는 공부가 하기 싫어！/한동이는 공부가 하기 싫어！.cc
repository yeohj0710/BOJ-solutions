#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    int Max = 0, ans;
    for(int i=1; i<=N; i++) {
        vector<bool> u(N+1);

        int cur = i;
        for(int j=0; j<N; j++) {
            u[cur] = true;
            cur = v[cur];
        }

        int cnt = 0;
        for(int i=1; i<=N; i++)
            if(u[i]) cnt++;

        if(cnt > Max) {
            Max = cnt;
            ans = i;
        }
    }

    cout << ans << "\n";
}
