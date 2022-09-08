#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = INT_MAX;

    for(int i=1; i<=1000; i++) {
        int cnt = 0;

        for(int j=0; j<N; j++)
            if(v[j] != i + M*j) cnt++;

        ans = min(ans, cnt);
    }

    cout << ans << "\n";
}
