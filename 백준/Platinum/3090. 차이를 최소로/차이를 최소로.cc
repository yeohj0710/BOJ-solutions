#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int l = 0, r = 1e9;
    vector<int> ans;

    while(l <= r) {
        int m = (l + r) / 2;

        vector<int> u(v);
        int sum = 0;

        for(int i=0; i<N-1; i++) {
            if(u[i] + m < u[i+1]) {
                sum += u[i+1] - (u[i] + m);
                u[i+1] = u[i] + m;
            }
        }

        for(int i=N-1; i>0; i--) {
            if(u[i] + m < u[i-1]) {
                sum += u[i-1] - (u[i] + m);
                u[i-1] = u[i] + m;
            }
        }

        if(sum <= M) {
            ans = u;
            r = m - 1;
        }
        else l = m + 1;
    }

    for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}
