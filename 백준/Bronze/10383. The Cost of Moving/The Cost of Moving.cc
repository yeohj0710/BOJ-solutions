#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        int N; cin >> N;
        if(N == 0) break;

        vector<string> v(N);
        map<string, int> m;

        for(int i=0; i<N; i++) {
            cin >> v[i];

            m[v[i]] = i;
        }

        sort(v.begin(), v.end());

        int ans = 0;

        for(int i=0; i<N; i++) ans += abs(m[v[i]] - i);

        cout << "Site " << t << ": " << ans << "\n";
    }
}
