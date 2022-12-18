#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<pair<int, string>> v(N);
        for(int i=0; i<N; i++) cin >> v[i].second >> v[i].first;

        sort(v.begin(), v.end(), greater<pair<int, string>>());

        for(int i=0; i<N; i++) {
            cout << v[i].second;

            if(i != N-1) cout << ", ";
        }
        cout << "\n";
    }
}
