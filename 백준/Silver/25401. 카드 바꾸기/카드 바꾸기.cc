#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = N;

    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++) {
            if((v[j] - v[i]) % (j - i) != 0) continue;

            int cnt = 0;

            for(int k=0; k<N; k++)
                if((v[j] - v[i]) * (k - i) != (v[k] - v[i]) * (j - i)) cnt++;

            ans = min(ans, cnt);
        }

    cout << ans << "\n";
}
