#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<pair<int, int>> v(N);
    for(int i=0; i<N; i++) {
        cin >> v[i].first;

        v[i].second = i;
    }

    vector<int> u(N);
    for(int i=0; i<N; i++) cin >> u[i];

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    vector<int> w(N);
    for(int i=0; i<N; i++) {
        if(v[i].first > u[i]) {
            cout << -1 << "\n";
            return 0;
        }

        w[v[i].second] = u[i];
    }

    for(int i=0; i<N; i++) cout << w[i] << " ";
    cout << "\n";
}
