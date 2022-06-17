#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        sort(v.begin(), v.end(), greater<int>());

        int ans = 0;
        for(int i=0; i<N; i++)
            if(i % 3 == 2) ans += v[i];

        cout << ans << "\n";
    }
}
