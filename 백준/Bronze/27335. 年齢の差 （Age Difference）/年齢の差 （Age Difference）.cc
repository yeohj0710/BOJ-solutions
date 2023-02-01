#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    int mx = 0, mn = INT_MAX;

    for(int i=0; i<N; i++) {
        cin >> v[i];

        mx = max(mx, v[i]);
        mn = min(mn, v[i]);
    }

    for(int i=0; i<N; i++)
        cout << max(abs(v[i] - mx), abs(v[i] - mn)) << "\n";
}
