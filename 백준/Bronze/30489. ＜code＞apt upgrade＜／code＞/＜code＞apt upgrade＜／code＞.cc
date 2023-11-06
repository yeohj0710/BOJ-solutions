#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());

    int ans = 0, tot = 0;

    for(int i=0; i<min(M+K, N); i++) ans += v[i];
    for(int i=0; i<N; i++) tot += v[i];

    cout << fixed << setprecision(4);

    cout << (double)ans * 100 / tot << "\n";
}
