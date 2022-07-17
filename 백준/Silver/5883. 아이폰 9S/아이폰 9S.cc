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
    for(int i=0; i<N; i++) {
        vector<int> u;
        for(int j=0; j<N; j++)
            if(v[j] != v[i]) u.push_back(v[j]);

        int cnt = 1, Max = 0;
        for(int j=1; j<u.size(); j++) {
            if(u[j] == u[j-1]) cnt++;
            else {
                Max = max(Max, cnt);
                cnt = 1;
            }
        }
        Max = max(Max, cnt);

        ans = max(ans, Max);
    }

    cout << ans << "\n";
}
