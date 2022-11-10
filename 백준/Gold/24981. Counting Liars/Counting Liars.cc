#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, char>> v(N);

    for(int i=0; i<N; i++)
        cin >> v[i].second >> v[i].first;

    sort(v.begin(), v.end());

    int ans = INT_MAX;

    for(int i=0; i<N; i++) {
        int cnt = 0;

        for(int j=0; j<N; j++) {
            if(j < i && v[j].second == 'L') cnt++;
            else if(j > i && v[j].second == 'G') cnt++;
        }

        ans = min(ans, cnt);
    }

    cout << ans << "\n";
}
