#include <bits/stdc++.h>
#define int long long
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if(a.first != b.first) return a.first > b.first;
    else return a.second < b.second;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<pair<int, int>> v(N);

    for(int i=0; i<N; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), cmp);

    int ans = 0;

    for(int i=1; i<N; i++)
        ans = max(ans, abs(v[i].second - v[i-1].second));

    cout << ans << "\n";
}
