#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    v.push_back(0);
    v.push_back(K);

    sort(v.begin(), v.end());

    vector<int> u;
    for(int i=1; i<v.size(); i++) u.push_back(max(v[i]-v[i-1]-1, (int)0));

    int ans = INT_MAX, l = 1, r = K;

    while(l <= r) {
        int m = (l + r) / 2;

        int sum = 0;
        for(int i=0; i<u.size(); i++) sum += u[i] / m;

        if(sum <= M) {
            ans = min(ans, m);

            r = m - 1;
        }
        else l = m + 1;
    }

    cout << ans << "\n";
}
