#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N, M; cin >> N >> M;

    vector<string> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;

    for(int i=0; i<M; i++) {
        vector<int> u(26);

        for(int j=0; j<N; j++) u[v[j][i] - 'a']++;

        int Max = 0;
        for(int j=0; j<26; j++) Max = max(Max, u[j]);

        ans += N - Max;
    }

    cout << ans << "\n";
}
