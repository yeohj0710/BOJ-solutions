#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;
    for(int i=0; i<N; i++) {
        int sum = 0, x = 0;
        for(int j=i; j<N; j++) {
            if(sum + v[j] <= M) {
                sum += v[j];
                x++;
            }
        }
        ans = max(ans, x);
    }

    cout << ans << "\n";
}
