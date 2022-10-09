#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;

    for(int i=0; i<32; i++) {
        int cnt = 0;

        for(int j=0; j<N; j++)
            if(v[j] & (1 << i)) cnt++;

        ans = max(ans, cnt);
    }

    cout << ans << "\n";
}
