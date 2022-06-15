#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<bool> v(N+1);

    int ans = 0, cnt = 0;
    for(int i=0; i<N*2; i++) {
        int x; cin >> x;

        if(!v[x]) {
            v[x] = true;
            cnt++;
        }
        else {
            v[x] = false;
            cnt--;
        }

        ans = max(ans, cnt);
    }

    cout << ans << "\n";
}
