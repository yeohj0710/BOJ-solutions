#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> v(N);
    for(int i=0; i<N; i++)
        cin >> v[i].first >> v[i].second;

    int ans = -1;

    for(int i=1; i<=N; i++) {
        int cnt = 0;

        for(int j=0; j<N; j++)
            if(i >= v[j].first && i <= v[j].second) cnt++;

        if(cnt == i) ans = max(ans, cnt);
    }

    cout << ans << "\n";
}
