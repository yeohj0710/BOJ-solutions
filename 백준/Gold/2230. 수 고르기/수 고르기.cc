#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int i = 0, j = 0, ans = INT_MAX;

    while(j < N) {
        int diff = v[j] - v[i];

        if(diff >= M) {
            ans = min(ans, diff);
            i++;
            if(i > j) j = i;
        }
        else j++;
    }

    cout << ans << "\n";
}
