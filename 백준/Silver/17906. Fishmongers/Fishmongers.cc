#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());

    vector<pair<int, int>> u(M);
    for(int i=0; i<M; i++)
        cin >> u[i].second >> u[i].first;

    sort(u.begin(), u.end(), greater<pair<int, int>>());

    int i = 0, j = 0, ans = 0;

    while(true) {
        while(u[j].second > 0) {
            ans += v[i++] * u[j].first;

            u[j].second--;
            if(i >= N || j >= M) break;
        }
        j++;
        if(i >= N || j >= M) break;
    }

    cout << ans << "\n";
}
