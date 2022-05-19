#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> v;
        while(true) {
            v.push_back(N);

            if(N == 1) break;

            if(N % 2 == 0) N /= 2;
            else N = N*3 + 1;
        }

        int ans = 0;
        for(int i=0; i<v.size(); i++) ans = max(ans, v[i]);

        cout << ans << "\n";
    }
}
