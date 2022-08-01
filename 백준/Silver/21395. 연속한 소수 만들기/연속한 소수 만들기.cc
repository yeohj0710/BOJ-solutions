#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 150001;

    vector<bool> p(Max, true);
    p[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<Max; i++)
        if(p[i]) v.push_back(i);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> u(N);
        for(int i=0; i<N; i++) cin >> u[i];

        sort(u.begin(), u.end());

        int ans = INT_MAX;

        for(int i=0; i<v.size()-N; i++) {
            int sum = 0;

            for(int j=0; j<N; j++) sum += abs(u[j] - v[i+j]);

            ans = min(ans, sum);
        }

        cout << ans << "\n";
    }
}
