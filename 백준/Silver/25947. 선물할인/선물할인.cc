#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    sort(v.begin()+1, v.end());

    for(int i=1; i<=N; i++) v[i] += v[i-1];

    int ans = 0;

    for(int i=1; i<=N; i++)
        if(v[i] - (v[i] - v[max(i-K, (int)0)]) / 2 <= M) ans = i;

    cout << ans << "\n";
}
