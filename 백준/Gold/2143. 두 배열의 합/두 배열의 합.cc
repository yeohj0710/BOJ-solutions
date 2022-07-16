#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int K; cin >> K;

    int N; cin >> N;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        v[i] = v[i-1] + x;
    }

    int M; cin >> M;

    vector<int> u(M+1);
    for(int i=1; i<=M; i++) {
        int x; cin >> x;

        u[i] = u[i-1] + x;
    }

    vector<int> vsum;
    for(int i=1; i<=N; i++)
        for(int j=0; j<i; j++) vsum.push_back(v[i] - v[j]);

    vector<int> usum;
    for(int i=1; i<=M; i++)
        for(int j=0; j<i; j++) usum.push_back(u[i] - u[j]);

    sort(vsum.begin(), vsum.end());
    sort(usum.begin(), usum.end());

    int ans = 0;
    for(int i=0; i<vsum.size(); i++)
        ans += upper_bound(usum.begin(), usum.end(), K - vsum[i])
               - lower_bound(usum.begin(), usum.end(), K - vsum[i]);

    cout << ans << "\n";
}
