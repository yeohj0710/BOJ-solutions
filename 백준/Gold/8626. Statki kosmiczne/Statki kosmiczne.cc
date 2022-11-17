#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) {
        cin >> v[i];

        v[i] *= a;
    }

    sort(v.begin(), v.end());

    int M; cin >> M;

    vector<int> u(M);
    for(int i=0; i<M; i++) {
        cin >> u[i];

        u[i] *= b;
    }

    int K; cin >> K;

    vector<int> w(K);
    for(int i=0; i<K; i++) {
        cin >> w[i];

        w[i] *= c;
    }

    vector<int> uw;

    for(int i=0; i<M; i++)
        for(int j=0; j<K; j++) uw.push_back(u[i] + w[j]);

    sort(uw.begin(), uw.end());

    int ans = 0;

    for(int i=0; i<N; i++) {
        double x = (v.back() + uw.back()) / 2.0 - v[i];

        ans += uw.end() - upper_bound(uw.begin(), uw.end(), x);
    }

    cout << ans << "\n";
}
