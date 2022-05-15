#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> v(N);
    for(int i=0; i<N; i++) {
        int x, y; cin >> x >> y;

        v[i] = {x, y};
    }

    int ans = 0;
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            for(int k=0; k<N; k++) {
                if(i == j || j == k || k == i) continue;

                if(v[i].first == v[j].first && v[i].second == v[k].second)
                    ans = max(ans, abs(v[i].first - v[k].first) * abs(v[i].second - v[j].second));
            }

    cout << ans << "\n";
}
