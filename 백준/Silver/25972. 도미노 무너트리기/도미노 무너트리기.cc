#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> v(N);
    for(int i=0; i<N; i++) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());

    vector<bool> u(N);
    int ans = 0;

    for(int i=0; i<N; i++) {
        if(!u[i]) ans++;

        if(i < N-1 && v[i+1].first <= v[i].first + v[i].second) u[i+1] = true;
    }

    cout << ans << "\n";
}
