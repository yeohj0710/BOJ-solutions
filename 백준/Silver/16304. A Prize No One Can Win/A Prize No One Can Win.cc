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

    int ans = 1;
    for(int i=1; i<N; i++) {
        if(v[i] + v[i-1] <= M) ans++;
        else break;
    }

    cout << ans << "\n";
}
