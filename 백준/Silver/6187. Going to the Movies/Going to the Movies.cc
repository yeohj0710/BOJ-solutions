#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int M, N; cin >> M >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;

    for(int i=1; i<(1<<N); i++) {
        int sum = 0;

        for(int j=0; j<N; j++)
            if(i & (1 << j)) sum += v[j];

        if(sum <= M) ans = max(ans, sum);
    }

    cout << ans << "\n";
}
