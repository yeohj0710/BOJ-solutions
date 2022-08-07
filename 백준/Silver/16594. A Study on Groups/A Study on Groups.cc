#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    if(N < M) {
        int sum = 0;

        for(int i=0; i<N; i++) sum += v[i];

        cout << sum << " " << sum << "\n";

        return 0;
    }

    sort(v.begin(), v.end());

    int ans = 0;

    for(int i=0; i<M; i++) ans += v[i];

    cout << ans << " ";

    sort(v.begin(), v.end(), greater<int>());

    int cur = -1, r = N % M;
    ans = 0;

    for(int i=0; i<M-r; i++) {
        ans += v[cur + N/M];
        cur += N/M;
    }
    for(int i=0; i<r; i++) {
        ans += v[cur + N/M + 1];
        cur += N/M + 1;
    }

    cout << ans << "\n";
}
