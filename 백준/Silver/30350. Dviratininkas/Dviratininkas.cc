#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<pair<int, int>> v(N);
    for(int i=0; i<N; i++) {
        cin >> v[i].first;

        v[i].second = i+1;
    }

    sort(v.begin(), v.end(), greater<pair<int, int>>());

    for(int i=0; i<M; i++) cout << v[i].second << "\n";
}
