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

    vector<int> sv, su;

    for(int i=1; i<=N; i++)
        for(int j=i; j<=N; j++) sv.push_back(v[j] - v[i-1]);

    for(int i=1; i<=M; i++)
        for(int j=i; j<=M; j++) su.push_back(u[j] - u[i-1]);

    sort(sv.begin(), sv.end());
    sort(su.begin(), su.end());

    int ans = 0;

    for(int i=0; i<sv.size(); i++) {
        ans += upper_bound(su.begin(), su.end(), K - sv[i])
               - lower_bound(su.begin(), su.end(), K - sv[i]);
    }

    cout << ans << "\n";
}
