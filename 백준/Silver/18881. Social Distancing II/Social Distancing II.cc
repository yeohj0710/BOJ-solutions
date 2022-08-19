#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> v(N);

    for(int i=0; i<N; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());

    int r = INT_MAX;

    for(int i=1; i<N; i++)
        if(v[i-1].second != v[i].second)
            r = min(r, v[i].first - v[i-1].first - 1);

    vector<int> u;

    for(int i=0; i<N; i++)
        if(v[i].second == 1) u.push_back(v[i].first);

    int ans = 1;

    for(int i=1; i<u.size(); i++)
        if(u[i] - u[i-1] > r) ans++;

    cout << ans << "\n";
}
