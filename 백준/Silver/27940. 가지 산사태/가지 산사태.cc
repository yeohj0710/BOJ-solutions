#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    vector<pair<int, int>> v(M);

    for(int i=0; i<M; i++)
        cin >> v[i].first >> v[i].second;

    int sum = 0;

    for(int i=0; i<M; i++) {
        sum += v[i].second;

        if(sum > K) {
            cout << i + 1 << " " << 1 << "\n";
            return 0;
        }
    }

    cout << -1 << "\n";
}
