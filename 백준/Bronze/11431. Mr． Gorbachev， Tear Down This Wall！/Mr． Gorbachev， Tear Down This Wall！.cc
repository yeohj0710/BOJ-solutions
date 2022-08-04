#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, M, K; cin >> N >> M >> K;

        vector<pair<double, double>> v(N+1);

        for(int i=0; i<N+1; i++) cin >> v[i].first >> v[i].second;

        double sum = 0;

        for(int i=1; i<N+1; i++) {
            if(v[i-1].first == v[i].first) sum += abs(v[i-1].second - v[i].second);
            else sum += abs(v[i-1].first - v[i].first);
        }

        int ans = ceil(sum * M / K);

        cout << "Data Set " << t << ":\n";
        cout << ans << "\n\n";
    }
}
