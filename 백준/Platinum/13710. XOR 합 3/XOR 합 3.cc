#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N), u(N+1);

    for(int i=0; i<N; i++) {
        cin >> v[i];
        u[i+1] = u[i] ^ v[i];
    }

    vector<int> cnt(30);

    for(int i=0; i<=N; i++)
        for(int j=0; j<30; j++)
            if(u[i] & (1 << j)) cnt[j]++;

    int ans = 0;
    for(int i=0; i<30; i++)
        ans += cnt[i] * (N + 1 - cnt[i]) * (1 << i);

    cout << ans << "\n";
}
