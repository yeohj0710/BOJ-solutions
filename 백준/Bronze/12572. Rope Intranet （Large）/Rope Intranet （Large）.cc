#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        vector<pair<int, int>> v(N);
        for(int i=0; i<N; i++) {
            int x, y; cin >> x >> y;

            v[i] = {x, y};
        }

        int ans = 0;
        for(int i=0; i<N; i++)
            for(int j=i+1; j<N; j++)
                if(v[i].first > v[j].first && v[i].second < v[j].second
                   || v[i].first < v[j].first && v[i].second > v[j].second) ans++;

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
