#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<double, double>> v(N);

    for(int i=0; i<N; i++) cin >> v[i].first >> v[i].second;

    int M; cin >> M;

    while(M--) {
        int K; cin >> K;

        vector<int> u(K);
        for(int i=0; i<K; i++) cin >> u[i];

        double ans = 0;

        for(int i=1; i<K; i++)
            ans += sqrt(pow(v[u[i-1]].first - v[u[i]].first, 2) + pow(v[u[i-1]].second - v[u[i]].second, 2));

        cout << round(ans) << "\n";
    }
}
