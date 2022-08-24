#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        map<int, bool> m;
        int ans = 0;

        for(int i=0; i<N; i++) {
            int x; cin >> x;

            if(!m[x]) ans = i+1;

            m[x] = true;
        }

        cout << "Case " << t << ": " << ans << "\n";
    }
}
