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

    int ans = 0;

    for(int i=0; i<N; i++) {
        vector<bool> u(1001);

        for(int j=0; j<N; j++) {
            if(j == i) continue;

            for(int k=v[j].first; k<v[j].second; k++) u[k] = true;
        }

        int cnt = 0;

        for(int j=0; j<=1000; j++)
            if(u[j]) cnt++;

        ans = max(ans, cnt);
    }

    cout << ans << "\n";
}
