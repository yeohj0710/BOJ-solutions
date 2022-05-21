#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        int ans = 0;
        for(int i=0; i<N; i++) {
            string str; cin >> str;
            if(str == "sheep") ans++;
        }

        cout << "Case " << t << ": This list contains " << ans << " sheep.\n\n";
    }
}
