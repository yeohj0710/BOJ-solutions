#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    int sum = 0;

    for(int i=0; i<N; i++) {
        cin >> v[i];

        sum += v[i];
    }

    int ans = sum * 2 + N * 2 + v[0] + v[N-1];

    for(int i=1; i<N; i++) ans += abs(v[i] - v[i-1]);

    cout << ans << "\n";
}
