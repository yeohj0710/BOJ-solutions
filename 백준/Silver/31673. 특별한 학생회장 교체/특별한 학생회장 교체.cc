#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    int sum = 0;

    for(int i=0; i<N; i++) {
        cin >> v[i];

        sum += v[i];
    }

    sort(v.begin(), v.end(), greater<int>());

    int cur = 0;

    for(int i=0; i<N; i++) {
        cur += v[i];

        if(cur >= sum - cur) {
            cout << M / (i + 2) << "\n";
            return 0;
        }
    }
}
