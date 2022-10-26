#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int M, N; cin >> M >> N;

    vector<pair<int, int>> v(N);

    for(int i=0; i<N; i++)
        cin >> v[i].first >> v[i].second;

    int ans = 0;

    for(int i=-100; i<=100; i++)
        for(int j=-100; j<=100; j++) {
            int cnt = 0;

            for(int k=0; k<N; k++)
                if(i <= v[k].first && v[k].first <= i+M
                   && j <= v[k].second && v[k].second <= j+M) cnt++;

            ans = max(ans, cnt);
        }

    cout << ans << "\n";
}
