#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());

    for(int i=1; i<N; i++) v[i] += v[i-1];

    int M; cin >> M;

    while(M--) {
        int x; cin >> x;

        cout << lower_bound(v.begin(), v.end(), x) - v.begin() + 1 << "\n";
    }
}
